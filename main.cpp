// Martínez Andrea
// Crocce Ana Laura
// Hippler María Silvina
// Cirión Constanza

#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

int main() {
    int opcionMenu, decision;
    string nombreMedico;
    bool continuar = true;
    float vidaPaciente = 100.0;
    int puntaje = 0;
    int vidas = 3;

    ///// (lo que pongas aca R"()""; abajo lo toma literal) /////
    cout << R"(
    ----------------------
        TITULO ASCII
    ----------------------
    )";

    cout << "Presioná ENTER para comenzar";
    cin.get();
    system("clear");

    while (continuar) {
        cout << R"(   (DIBUJO)   )" << endl;
        cout << endl;
        cout << "1. Jugar\n";
        cout << "2. Historia\n";
        cout << "3. Créditos\n";
        cout << "4. Salir\n";
        cout << "\nSeleccioná una opción: ";
        cin >> opcionMenu;

        switch (opcionMenu) {
            case 1: {
                vidaPaciente = 100.0;
                puntaje = 0;
                vidas = 3;
                
                system("clear");

                cout << "\nIngresá tu nombre, doctor/a: ";
                ///// DIBUJO DOCTOR/A /////
                cin >> nombreMedico;
                
                ///// DESARROLLAR CONTEXTO /////
                cout << "\nBienvenido/a, Dr/a. " << nombreMedico << ".\nHoy tenés un turno de guardia intensiva toda la noche.\nSos el/la únicx médicx en el hospital. \n";

                cout << "\nPresioná ENTER para continuar\n";
                cin.ignore().get();
                system("clear");

                int pacientesSalvados = 0;
                int turno = 1;
                while (vidas > 0) {
                    vidaPaciente = 100.0;
                    
                    cout << "\nTurno #" << turno << " - Vidas restantes: " << vidas << "\n" << endl;
                    sleep(2);

                    ///// AGREGARLE DRAMATISMO /////
                    do {
                        system("clear");
                        cout << "Llegan pacientes:\n\n";
                        cout << "1. Paciente 1: Persona joven con dolor de cabeza\n";
                        cout << "2. Paciente 2: Dolor en el pecho\n";
                        cout << "3. Paciente 3: Herido por una riña\n\n";
                        cout << "¿A quién deseas atender?: \n";
                        cin >> decision;
                        cout << "\n";
                    } while (decision != 1 && decision != 2 && decision != 3);

                    sleep(2);

                    if (decision == 1) {
                        ///// REVISAR OPCIONES. SI ES NECESARIO AGREGAR DRAMATISMO. /////
                        do {
                            system("clear");
                            cout << "¿Qué tratamiento le das?: \n\n";
                            cout << "1. Recetar paracetamol y reposo\n";
                            cout << "2. Inducir coma farmacológico\n";
                            cin >> decision;
                            cout << "\n";
                        } while (decision != 1 && decision != 2);

                        system("clear");
                        sleep(3);

                        ///// REVISAR RESULTADOS. SI ES NECESARIO AGREGAR DRAMATISMO. /////
                        if (decision == 1) {
                            cout << "\nEl paciente descansa y se recupera por completo. ✅\n";
                            puntaje += 1;
                        } else if (decision == 2) {
                            cout << "\nMe parece que fue un montón. El paciente no despierta del coma. ❌\n";
                            vidaPaciente = 0;
                        }

                    } else if (decision == 2) {
                        do {
                            system("clear");
                            cout << "\nEntra el paciente con dolor de pecho y cara de preocupación. ¿Qué hacés?\n\n";
                            cout << "1. Le das un mate y le decís que se relaje\n";
                            cout << "2. Llamás a un cardiólogo y lo mandás directo a la unidad coronaria\n";
                            cout << "3. Lo hacés correr una vuelta a la manzana para ver si se le pasa\n";
                            cin >> decision;
                            cout << "\n";
                        } while (decision != 1 && decision != 2 && decision != 3);

                        system("clear");
                        sleep(3);

                        if (decision == 1) {
                            cout << "\nEl paciente se relaja... demasiado. Se desmaya en la sala y no vuelve a despertar. ❌\n";
                            vidaPaciente = 0;
                        } else if (decision == 2) {
                            cout << "\n¡Excelente! El tratamiento de urgencia fue exitoso. El paciente está fuera de peligro. ✅\n";
                            puntaje += 1;
                        } else if (decision == 3) {
                            cout << "\nEl paciente se desploma a los 20 metros. Lo revivís como podés, pero queda muy complicado. ⚠️\n";
                            vidaPaciente -= 50;
                        }

                    ///// REVISAR OPCIONES. SI ES NECESARIO AGREGAR DRAMATISMO. /////
                    } else if (decision == 3) {
                        do {
                            system("clear");
                            cout << "\nEl paciente tiene una herida profunda en la pierna.\n¿Qué tratamiento deseas aplicar?\n\n";
                            cout << "1. Operar\n";
                            cout << "2. Dar medicamento y mandarlo a casa\n";
                            cin >> decision;
                            cout << "\n";
                        } while (decision != 1 && decision != 2);

                        sleep(2);

                        if (decision == 1) {
                            ///// REVISAR OPCIONES. SI ES NECESARIO AGREGAR DRAMATISMO. /////
                            do {
                                system("clear");
                                cout << "\n¿Tipo de operación?\n\n";
                                cout << "1. Operarle la pierna\n";
                                cout << "2. Abrirle la panza\n";
                                cout << "3. Amputarle la pierna\n";
                                cin >> decision;
                                cout << "\n";
                            } while (decision != 1 && decision != 2 && decision != 3);

                            system("clear");
                            sleep(2);

                            ///// REVISAR RESULTADOS. SI ES NECESARIO AGREGAR DRAMATISMO. /////
                            if (decision == 1) {
                                cout << "\n¡Cirugía exitosa! El paciente evoluciona bien. ✅\n";
                                puntaje += 1;
                            } else if (decision == 2) {
                                cout << "\nComplicaciones internas... El paciente no sobrevive. ❌\n";
                                vidaPaciente = 0;
                            } else if (decision == 3) {
                                cout << "\nLa amputación salva su vida, ¿pero a qué costo? ⚠️\n";
                                vidaPaciente -= 60;
                                puntaje += 1;
                            }

                        } else if (decision == 2) {
                            system("clear");
                            cout << "\nEl paciente es dado de alta muy pronto.\nMuere al llegar a su casa. ❌\n";
                            vidaPaciente = 0;
                        }

                    } else {
                        cout << "Opción inválida. Vamos de nuevo...\n";
                        turno--;
                        continue;
                    }

                    // Evaluar resultado final
                    sleep(2);
                    cout << "\n............................................................\n";

                    // Mostrar barra de vida con FOR
                    cout << "Vida del paciente: [";
                    int vidaVisual = vidaPaciente / 5;
                    for (int i = 0; i < 20; i++) {
                        if (i < vidaVisual) cout << "#";
                        else cout << " ";
                    }
                    cout << "] " << vidaPaciente << "%\n";

                    //Estado final del paciente
                    if (vidaPaciente >= 70) {
                        cout << "Estado del paciente: ESTABLE ✅ (vida: " << vidaPaciente << "%)\n";
                        pacientesSalvados++;
                    } else if (vidaPaciente >= 40) {
                        cout << "Estado del paciente: CRÍTICO ⚠️ (vida: " << vidaPaciente << "%)\n";
                        cout << "Sobrevive con secuelas.\n";
                        pacientesSalvados = 0;
                    } else {
                        cout << "Estado del paciente: FALLECIDO ❌ (vida: " << vidaPaciente << "%)\n";
                        vidas--;
                        pacientesSalvados = 0;
                    }

                    if (vidas <= 0) {
                        cout << "............................................................";
                        sleep(3);
                        ///// DIBUJO GAME OVER. /////
                        system("clear");
                        cout << "\n\nTe quedaste sin vidas. GAME OVER!\n";
                        cout << "\nPresioná ENTER para jugar de nuevo\n";
                        cin.ignore().get();
                        system("clear");

                        break;
                    }

                    cout << "............................................................\n";
                    sleep(3);
                    system("clear");

                    if (pacientesSalvados >= 3) {
                        ///// DIBUJO VICTORIA. /////
                        cout << "\nBien ahí, Dr/a. " << nombreMedico << "! ¡Salvaste a 3 pacientes seguidos!\n";
                        cout << "Ya te podés ir a tu casa a descansar. 🏠🩺\n";
                        cout << "Puntaje final: " << puntaje << " decisiones correctas.\n";
    
                        cout << "\nPresioná ENTER para jugar de nuevo\n";
                        cin.ignore().get();
                        system("clear");
                        break;
                    }

                    turno++;
                }

                break;
            }

            case 2:
                system("clear");
                ///// DIBUJO /////
                cout << "\nHISTORIA:\n";
                cout << "Sos un joven médico recièn recibido enfrentando decisiones críticas en la sala de urgencias de un hospital público.\n";
                cout << "Cada elección que tomes puede salvar una vida... o no.\n\n";
                cout << "Presioná ENTER para volver al menú principal\n";
                cin.ignore().get();
                system("clear");
                break;

            case 3: {
                system("clear");
                ///// Dibujo / nombres con tipografia /////
                cout << "\nDesarrollado por....(completar)\n\n";
                cout << "Presioná ENTER para volver al menù principal\n";
                cin.ignore().get();
                system("clear");
                break;
            }

            case 4:
                continuar = false;
                system("clear");
                ///// Dibujo con saludo /////
                cout << "\nGracias por jugar. ¡Hasta pronto!\n\n";
                cout << "Presioná ENTER para terminar\n";
                cin.ignore().get();
                system("clear");
                break;

            default:
                system("clear");
                cout << "\nOpción inválida. Intentá nuevamente.\n\n";
                cout << "Presioná ENTER para volver al menù principal\n";
                cin.ignore().get();
                system("clear");
        }
    }

    return 0;
}