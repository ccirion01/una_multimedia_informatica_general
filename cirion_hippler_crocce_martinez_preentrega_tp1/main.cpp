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
        _________________________________
       |                                 |
       |  HOSPITAL EL ÚLTIMO ALIENTO     |
       |  "Donde la muerte es solo un    |
       |   efecto secundario"            |
       |_________________________________|
        )";
    

    cout << "\nPresiona ENTER para comenzar (si te atreves)...";
    cin.get();
    system("clear");

    while (continuar) {
        cout << "Seleccioná una opción: \n";
        cout << R"(
        ╔══╗░░░░░░░░░░░░░░░░░░░╔╗░░░░
        ║██║░░░¡MENÚ DEL CAOS!░║║░░░░
        ║██╠═══════════════════╣║░░░░
        ║██║1. Jugar░░░░░░░░░░░║║░░░░
        ║██║2. Historia░░░░░░░░║║░░░░
        ║██║3. Créditos░░░░░░░░║╚╗░░░
        ║██║4. Salir░░░░░░░░░░░║▓║░░░
        ╚══╝░░░░░░░░░░░░░░░░░░░╚═╝░░░
        )" << endl;
        cout << endl;        
        cin >> opcionMenu;

        switch (opcionMenu) {
            case 1: {
                vidaPaciente = 100.0;
                puntaje = 0;
                vidas = 3;
                
                system("clear");

                cout << R"(
                ╔════╗    DOCTOR/A!
                ║🧑⚕️║ Ingresa tu nombre:
                ╚══╦═╝
                )";
                cin >> nombreMedico;
                
cout << R"( 
Hoy tenés el privilegio exclusivo de ser:
¡LA ÚNICA PERSONA EN 20 KM A LA REDONDA QUE SABE USAR UN TERMÓMETRO!

Preparate para:
- Diagnosticar males inexistentes
- Hacer suturas con hilo dental
- Y rezar infinitamente padres nuestros)" << "\n";

                cout << "\nPresiona ENTER para continuar\n";
                cin.ignore().get();
                system("clear");

                int pacientesSalvados = 0;
                int turno = 1;
                while (vidas > 0) {
                    vidaPaciente = 100.0;
                    
                    cout << "Turno #" << turno << " - Vidas restantes: " << vidas << "\n" << endl;

                    sleep(2);                    

                    do {
                        system("clear");
                        cout << "Llegan pacientes:\n\n";
                        cout << "1. Influencer con migraña apocalíptica\n";
                        cout << "2. Jubilado infartado\n";
                        cout << "3. Pelea legendaria\n\n";
                        cout << "¿A quién deseas atender?: \n";
                        cin >> decision;
                        cout << "\n";
                    } while (decision != 1 && decision != 2 && decision != 3);

                    sleep(2);

                    if (decision == 1) {
                        do {
                            system("clear");
                            cout << "Un influencer de 19 años con 'el peor dolor de cabeza de la historia del universo'.\n";
                            cout << "¿Qué tratamiento le das?: \n\n";
                            cout << "1.Paracetamol y decirle que deje el celular.\n";
                            cout << "2.Inducir coma y grabar un unboxing médico.\n";
                            cin >> decision;
                            cout << "\n";
                        } while (decision != 1 && decision != 2);

                        system("clear");
                        sleep(3);

                        if (decision == 1) {
                            cout << "MILAGRO MODERNO:\nEl joven sobrevive... pero pierde 10k seguidores por no subir contenido.✅ \n";
                            puntaje += 1;
                        } else if (decision == 2) {
                            cout << "EFECTO SECUNDARIO:\nSu coma se vuelve tendencia. #DesafíoDelComa. 4 no despiertan. La OMS te odia.❌\n";
                            vidaPaciente = 0;
                        }

                    } else if (decision == 2) {
                        do {
                            system("clear");
                            cout << "Un jubilado de 72 años entra sudoroso, agarrándose el pecho como si acabara de ver la factura de la luz. ¿Qué hacés?\n\n";
                            cout << "1. Le das un mate y le decís que se relaje\n";
                            cout << "2. Cardiólogo por Zoom y ECG.\n";
                            cout << "3. Electrodos conectados a la cafetera.\n";
                            cin >> decision;
                            cout << "\n";
                        } while (decision != 1 && decision != 2 && decision != 3);

                        system("clear");
                        sleep(3);

                        if (decision == 1) {
                            cout << "El paciente se relaja... demasiado. Se desmaya en la sala y no vuelve a despertar. ❌\n";
                            vidaPaciente = 0;
                        } else if (decision == 2) {
                            cout << "MILAGRO TECNOLÓGICO:\nEl cardiólogo remoto grita '¡Lo tenemos!'. Sobrevive sin secuelas. ✅\n";
                            puntaje += 1;
                        } else if (decision == 3) {
                            cout << "EPIC FAIL:\nEl monitor hace corto y lo reanima, pero le cae todo el cafe encima \ny ahora tiene quemaduras de tercer grado.⚠️\n";
                            vidaPaciente -= 50;
                        }

                    } else if (decision == 3) {
                        do {
                            system("clear");
                            cout << "Una persona con un tajo en la pierna tras pelearse con un perro salchicha.\n¿Qué tratamiento deseas aplicar?\n\n";
                            cout << "1.Operar. Que podria malir sal?.\n";
                            cout << "2.Mandar a casa con curitas.\n";
                            cin >> decision;
                            cout << "\n";
                        } while (decision != 1 && decision != 2);

                        sleep(2);

                        if (decision == 1) {
                            do {
                                system("clear");
                                cout << "¿Tipo de operación?\n\n";
                                cout << "1.Suturar con hilo dental\n";
                                cout << "2.Abrir panza 'por si acaso'\n";
                                cout << "3.Amputar exprés\n";
                                cin >> decision;
                                cout << "\n";
                            } while (decision != 1 && decision != 2 && decision != 3);

                            system("clear");
                            sleep(2);

                            if (decision == 1) {
                                cout << "La cicatriz quedó con forma del logo de Marvel. Lo subís a Instagram,\nte llueven seguidores y clientes. Felicitaciones, ya no sos pobre. ✅\n";
                                puntaje += 1;
                            } else if (decision == 2) {
                                cout << "EFECTO COLATERAL:\nEncuentras chicle de 1997 en su estómago. Muere.❌\n";
                                vidaPaciente = 0;
                            } else if (decision == 3) {
                                cout << "NUEVO LOOK:\nPierna de palo literal. Sobrevive. ¿pero a qué costo? ⚠️\n";
                                vidaPaciente -= 60;
                                puntaje += 1;
                            }

                        } else if (decision == 2) {
                            system("clear");
                            cout << "Nota de alta: 'No molestar a perros pequeños'.\nMuere camino a la parada. ❌\n";
                            vidaPaciente = 0;
                        }

                    } else {
                        cout << "Opción inválida. Vamos de nuevo...\n";
                        turno--;
                        continue;
                    }

                    // Evaluar resultado final
                    sleep(3);
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
                        sleep(3);
                        ///// DIBUJO GAME OVER. /////
                        system("clear");

                        cout << R"(
                                      ╔═════════════════════════════════╗
                                      ║            GAME OVER            ║
                                      ║   (pero con diploma de honor)   ║
                                      ╚═════════════════════════════════╝
 
                                    ¡Felicidades! Lograste lo imposible:
                
                                    Perder a todos tus pacientes en tiempo récord.
                                    Ganarte el título honorífico de ‘Peor Médico del Año’.
                
                                    No te preocupes, siempre podés volver mañana y seguir acumulando fracasos
                                    )" << endl;

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
                        cout << R"(
                        ¡FELICIDADES DR/A. )" << nombreMedico << R"(!
                        Has logrado lo imposible: 

                        - Sobreviviste a 3 pacientes
                        - No quemaste el quirófano (completamente)
                        - Y demostraste que el título de 6 meses online... ¡sí sirve para algo!

                        Tu premio es:
                        ¡UNA NOCHE DE DESCANSO! 🏠🩺

                        )" << endl;
                        
                        cout << "Puntaje final: " << puntaje << " decisiones correctas.\n";
    
                        cout << "\nPresiona ENTER para jugar de nuevo\n";
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
                
cout << R"(Hospital El Último Aliento
“Donde la muerte es solo un efecto secundario”

Hospital El Último Aliento es el único lugar donde, si hace falta, sos médico, enfermero, psicólogo 
y cadete de farmacia… 
¡todo en uno! Estás solo. Los pasillos rezuman miedo, alcohol y una pizca de Clonazepam caducado. 
Con tu título recién plastificado y una sonrisa que tiembla más que un termómetro, arrancás tu primer turno 
de 12 horas. 
Nadie te advirtió de esto: el último médico renunció por Zoom y se llevó hasta el estetoscopio.

Acá vas a tener que elegir entre tratamientos ridículamente riesgosos que ríes para no llorar. 
Y, créelo o no, a veces la decisión más absurda es la que salva una vida.

¿Estás preparadx para sobrevivir a la guardia más al límite (y corta) de tu carrera?
)" << endl;

                cout << "Presiona ENTER para volver al menú principal\n";
                cin.ignore().get();
                system("clear");
                break;

            case 3: {
                system("clear");
                ///// Dibujo / nombres con tipografia /////
cout << R"(*** CRÉDITOS ***

Programado con café frío, ideas retorcidas y noches sin dormir por:

**CIRIÓN CONSTANZA**
La que programó con memes y oraciones al dios del Wi-Fi

**HIPPLER MARÍA SILVINA**
Convirtió errores en chistes... seguimos riendo

**MARTINEZ ANDREA** 
La que arregló bugs con más bugs

**CROCCE ANA LAURA**
Reina del copy-paste (y del 'esto no se nota')
)" << endl;

                cout << "Presiona ENTER para volver al menú principal\n";
                cin.ignore().get();
                system("clear");
                break;
            }

            case 4:
                continuar = false;
                system("clear");
                ///// Dibujo con saludo /////
                cout << "\nGracias por jugar. ¡Hasta pronto!\n\n";
                cout << "Presiona ENTER para terminar\n";
                cin.ignore().get();
                system("clear");
                break;

            default:
                system("clear");
                cout << "\nOpción inválida. Intenta nuevamente.\n\n";
                cout << "Presiona ENTER para volver al menù principal\n";
                cin.ignore().get();
                system("clear");
        }
    }

    return 0;
}