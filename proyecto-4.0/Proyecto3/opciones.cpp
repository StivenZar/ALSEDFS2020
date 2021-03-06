#include "opciones.h"
#include "ui_opciones.h"

#include "registro_usr.h"
#include "registro_paci.h"
#include "filtro.h"
#include "inicio.h"

#include <iostream>
#include <sstream>

using namespace std;

/*!
 * \brief opciones::opciones
 * El constructor de esta clase deberia ir vacio, si concideramos que apenas iniciemos la aplicacion la ventana principal es
 * la que se muestra, pero para efectos especificos de esta aplicacion nuestra ventana de opciones debe mostrase despues del
 * acceso de un Usuario registrado. Esa es la razon por la cual esta fucnion tiene una accion de apertura de una ventana.
 */

opciones::opciones(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::opciones)
{
    ui->setupUi(this);
    inicio a(this);
    a.setModal( true );
    a.show();
    a.exec();
    show();
}

opciones::~opciones()
{
    delete ui;
    cout<<"llamando al desct_REGISTRO_OPCIONES"<<endl;
}

/*!
 * \brief opciones::on_Reg_paciente_clicked
 * Fundamentalmente esta mini fución se encarga de tomar la ventana emergente del formulario para la creacion de un nuevo paciente,
 * traducir la informacion de las entradas de texto y cargar esa informacion a la base de datos.
 */
void opciones::on_Reg_paciente_clicked()
{
    da.abrirDB("formulario_usr");
    registro_paci a (this);
    a.setModal (true);
    a.show();
    a.exec();
    da.cargar_pac(a);
    da.cerrarDB();
}

/*!
 * \brief opciones::on_Real_prueba_clicked
 * Esta funcion es la encargada de realizar el hilo de ventanas mas largo de esta aplicacion, comenzando con la ventana de filtro,
 * y verificacion de la existencia de un paciente, terminando con el panel de juego.
 */
void opciones::on_Real_prueba_clicked()
{
    filtro b (this);
    b.setModal (true);
    b.show();
    b.exec();
}

/*!
 * \brief opciones::on_Edit_usr_clicked
 * Al igual que la funcion on_Reg_Paciente_clicked esta funcion realiza el mismo proceso de "traduccion" pero ahora para la creacion
 * de un nuevo usuario, terminando por guardar toda esa data en la abse de datos.
 */
void opciones::on_Edit_usr_clicked()
{
    registro_usr c (this);
    c.show();
    c.exec();
}
