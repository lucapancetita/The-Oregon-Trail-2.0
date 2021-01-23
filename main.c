#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int i,rta2, rta3, rta4, rta5, rtaE, cantcomida, municion, materiales, est1, est2, est3, est4, est5, estC, suerte, robo, start, contdia=0, probrobo, probrobo2, decrobo, probC, probC2, probT, probCom, rtaT, rtaCom, rta6;
float rta, hambre1=100, hambre2=100, hambre3=100, hambre4=100, hambre5=100, salud1=100, salud2=100, salud3=100, salud4=100, salud5=100;
main(){
srand (getpid());
printf("\nc;:::::::::::::::::::::::::::::::::::::::::::::::::::;c");
printf("\n.'lxxddddddddxdddddddddxxdddddddddddddddddddddddddddo'.");
printf("\n.cXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXc.");
printf("\n.cXMMWWWWWWWWWWWWWWWWMMWWWWMMMMMMMMMMMMMMMMMMMMMMMMMXc.");
printf("\n.cXMW0oc::::::::::cxKWW0dxKNWMMMMMMMMMMMMMMMMMMMMMMMXc.");
printf("\n.cXMWKkdddo;..:oddxOXWNx,:kXWMMMMMMMMMMMMMMMMMMMMMMMXc.");
printf("\n.cXMMMMMMMNd,:kNWMMMMMNx,;kXNWWWWMMMMMMMWWWWWWWWMMMMXc.");
printf("\n.cXMMMMMMMNd,:kNWMMMMMNx,,ool:cokKWMMMWKkocccldONWMMXc.");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNx'.;lool:;oKWWXOoccoddolldONMXc.");
printf("\n.cXMMMMMMWXd,:kXWMMMMMNx,,o0NWNd,:ONNO::d0NWWX0o,c0WXc.");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNx,:kXWMNx,;kXXd'.,:cccc:'.;kNXc.");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNx,:kXWMNx,;kXXx,.;loooooookKWXc.");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNx,;kXWMNx,;kXNOc;lkXWWNXOdxXWXc.");
printf("\n.cXMMMMMMMNd,:ONWMMMMMNx,:kXWMNx;:kXWN0d:;cccc::lkXWXc.");
printf("\n.cXMMMMMMMWKkOXWMMMMMMWKkOXWMMWKkOXWMMWXOxdooodkXWMMXc.");
printf("\n.cMMWNKOkkkkOKNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.......................");
printf("\n.cMMWWNNNNNNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
printf("\n.cWNKkl;;;;:lOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
printf("\n.cXkc:codddoc:lkXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
printf("\n.cdlco0NMMWN0oclxKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
printf("\n.c::kXWMMMMMWKx:;dKKOkkxdx0K0xoooox0NWMMWKkdoooodx0NWWNOdoooodkKWWNKOkOkdoodkKN");
printf("\n.c;:ONWMMMMMWNk:'lko,,:cccodl:;::;:lxKNXOo:,;;;,''l0X0xc;,,;;,:oOK0o,,:cc:;;:oO");
printf("\n.c;cONWMMMMMWNO:,lxl';xKX0o;;codxdc,,oOxccdOXNX0o;lO0o:lkOKXKOo:cxOl',d0XNXOo:o");
printf("\n.c;:kNWMMMMMWXk:,lko;l0WNO:..',,,,,',lxo;cONMMWKd:ckkc:xXWWMWXkc:dOo;l0WMWNKo:o");
printf("\n.clcdOXWMMMWXOdccxOd:l0WNO:':x0KKK00O00d:cONWWWKd:ckkc:dXWWMWXkc:dOo:lKWMWN0o:o");
printf("\n.cOo;:xKXXX0x::oOK0d:l0WWKd:cxOKXKOolxKklcokKXKOo;lO0o:lxk0K0koclkOd:l0WMWN0o;l");
printf("\n.cNKkl:,,,,,:okKNNKdcoKWMWXOo:,,,,;lxKNX0d:,,;,'.'c0NKkc,',,;;cx0XKdcoKWMWNKd:o");
printf("\n.cMWWXOxxxxxOXWMMMWX0KNMMMMWKOxxxxkKNWMWNKkxddlc;;lKWWN0kxxxxk0NWMWX0KNMMMWNK0K");
printf("\n.cMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKdlcccc::coONMMMMMMMMMMMMMMMMMMMMMMMMMMM");
printf("\n.cMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKxolllllokKNWMMMMMMMMMMMMMMMMMMMMMMMMMMM");
printf("\n.cXc.ll:cccccccccccccccccccccccccccccccccccccccccccccccccccc:::::::::::::::::;");
printf("\n.cXMMMMWWWWWMWWWMWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXc.l");
printf("\n.cXMW0dlllllllllllokKWMMMMMMMMMMMMMMMMMMMMMMMMWK;;KNWKkkKNXc.l");
printf("\n.cXMW0xollc,..;cllokKWMMMMMMMMMMMMMMMMMMMMMMMMWX;;KNNk;;xXXc.l");
printf("\n.cXMMMWWWWXd,:kXWMWMMMMMMMMMMMMMMMMMWMMMMMMMMMMMWWMMWk;;xXXc.l");
printf("\n.cXMMMMMMMNd,:kNWMMMMMWKxxkxdkXWN0dolllllx0NWMWKkkKWNk;;xXXc.l");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNx,':cokK0dc::cllc:;;dKWNk;;xXNk;;xXXc.l");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNx,,o0NMWKxx0XWWWN0l';OWNk;;xXNk;;xXXc.l");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNx,:kXWMMMWXOxooolc,.;OWNk;;xXNk;;xXXc.l");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNx,:kXWMWKxolclllc:'.;ONNk;;xXNk;;xXXc.l");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNd,:kXWMNx,;dKNWWN0l.;OWNk;;xXNk;;xXXc.l");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNx,:kXWMW0o::cloool,.;OWNk;;xXNk;;xXXc.l");
printf("\n.cXMMMMMMMW0xkKWMMMMMMW0xkKNMMMWXOoccccoddokXWWKxxKNWKxxKNXc.l");
printf("\n.cXMMMMMMMMMWWMMMMMMMMMMWWMMMMMMMWWWWWWWWWWWMMMMWWMMMMWWMMXc.l");
printf("\n.cXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXc.l");
printf("\n.'loooooooooooooooooooooooooooooooooooooooooooooooooooooool'.l");
printf("\nl:ccccccccccccccccccccccccccccccccccccccccccccccccccccccccc:lO");
printf("\n");
printf("\nBy LucaPancetitA");
printf("\n");
printf("BETA 1");

getch();

printf("\n Pulse una tecla para continuar ");
getch();

printf("\n Esta es una adaptacion independiente del juego THE OREGON TRAIL a C, ");
printf("\n probablemente no sea 100*/. fiel al material original.....");

printf("\n Pulse una tecla para continuar ");
getch();

// Nombres de los npcs
	char nombre1 [20];
	char nombre2 [20];
	char nombre3 [20];
	char nombre4 [20];
	char nombre5 [20];
	contdia=0;
	do {
	printf("\n Ingrese el nombre de su primer personaje: ");
	scanf("%s", &nombre1);
	printf("\n Ingrese el nombre de su segundo personaje: ");
	scanf("%s", &nombre2);
	printf("\n Ingrese el nombre de su tercer personaje: ");
	scanf("%s", &nombre3);
	printf("\n Ingrese el nombre de su cuarto personaje: ");
	scanf("%s", &nombre4);
	printf("\n Ingrese el nombre de su quinto personaje: ");
	scanf("%s", &nombre5);

	printf("\n");

	printf("Nombre 1: %s", nombre1);
	printf("\n");
	printf("Nombre 2: %s", nombre2);
	printf("\n");
	printf("Nombre 3: %s", nombre3);
	printf("\n");
	printf("Nombre 4: %s", nombre4);
	printf("\n");
	printf("Nombre 5: %s", nombre5);

	printf("\n Estas seguro de que quieres llamarlos asi? 1=Si/0=No: ");
	scanf("%f", &rta);
	} while (rta == 0);
	
//Dia de preparación
	
//Asignación de valores:
		cantcomida=15;
		municion=4;
		materiales=20;
		estC=100;

	
	printf("\n DIA 0");	
	
	do{
	
	
	printf("\n");
	printf("\n Que quieres hacer?");
	printf("\n 1. Comenzar el viaje - 2. Revisar estado de los tripulantes");
	printf("\n 3. Revisar suministros - 4. Observar el paisaje");
	printf("\n 5. Revisar estado de la carreta");
	printf("\n Escriba aqui: ");
	scanf("%d", &rta2);

	printf("\n");
	printf("\n Opcion elegida: %d", rta2);
	printf("\n");
	
	switch(rta2){
		case 1:
		printf("\n Estas Seguro? 1=si/0=no: ");
		scanf("%d", &rta3);
		printf("\n");
		break;
		
		case 2:
		printf("\n Estado de la tripulacion: ");
		do {
			printf("\n");
			printf("\n Opciones:");
			printf("\n 1=%s - 2= %s", nombre1, nombre2);
			printf("\n 3=%s - 4=%s", nombre3, nombre4);
			printf("\n 5=%s 0=Salir", nombre5);
			printf("\n");
			printf("\n A quien desea revisar?: ");
			scanf("%d", &rtaE);
			printf("\n");
		
		switch(rtaE){
			case 1:
			printf("\n %s: ", nombre1);
			printf("\n Salud: %f", salud1);
			printf("\n Hambre: %f", hambre1);
			getch();
			break;
			
			case 2:
			printf("\n %s: ", nombre2);
			printf("\n Salud: %f", salud2);
			printf("\n Hambre: %f", hambre2);
			getch();
			break;
			
			case 3:
			printf("\n %s: ", nombre3);
			printf("\n Salud: %f", salud3);
			printf("\n Hambre: %f", hambre3);
			getch();
			break;
			
			case 4:
			printf("\n %s: ", nombre4);
			printf("\n Salud: %f", salud4);
			printf("\n Hambre: %f", hambre4);
			getch();
			break;
			
			case 5:
			printf("\n %s: ", nombre5);
			printf("\n Salud: %f", salud5);
			printf("\n Hambre: %f", hambre5);
			getch();
			break;
			
			}
			} while(rtaE != 0);
		
		break;
		
		case 3:
		printf("\n Suministros: ");
		printf("\n Comida: %d", cantcomida);
		printf("\n Municion: %d", municion);
		printf("\n Materiales: %d", materiales);
		getch();
		printf("\n");
		break;
		
		case 4:
		printf("\n Paisaje: ");
		printf("\n Falta implementar :)");
		getch();
		printf("\n");
		break;
		
		case 5:
		printf("\n Carreta: ");
		estC=100;
		printf("\n100-75 = Como Nuevo");
		printf("\n75-50 = Aceptable");
		printf("\n50-25 = Mal");
		printf("\n25-1 = PELIGROSO");
		
		printf("\nEl estado de la carreta es: %d", estC);
		getch();
		printf("\n");	
		break;
	}
	}while (rta3 != 1);
	
	//comienza el juego
	
	contdia++;
	for(i=0;i<10;i++){

	printf("\n DIA %d", contdia);
	printf("\n");

	
	if (salud1 <= 0 && salud2 <= 0 && salud3 <= 0 && salud4 <= 0 && salud5 <= 0){
		goto F;
	}
	
	if(estC < 1){
		goto F;
	}
	//Sistema Carreta
	estC = estC - 18;
	probC = rand() % 11;
	if(probC < 4){
		printf("Debido a una distracción pasaste por arriba de un pozo, la carreta sufre daños....");
		printf("\n");
		//Daño
		//Estado
		
		//Como Nuevo
		if(estC < 100 && estC >= 75){
			estC = estC - 5;
			printf("\n Los daños fueron minimos gracias al buen estado de la carreta....");
		}
		//Aceptable
		if(estC < 75 && estC >=50){
			estC = estC - 10;
			printf("\n Los daños fueron menores debido a que la carreta aún no estaba demasiado dañada...");
		}
		//Mal
		if(estC < 50 && estC >= 25){
			estC = estC - 15;
			printf("\n Debido al mal estado en la carreta los daños fueron mayores a lo normal...");
		}
		//PELIGROSO
		if(estC < 25){
		probC2 = rand() % 11;
		if(probC2 < 3){
			goto F;
		} else {
		estC = estC - 20;
		printf("\n El estado de la carreta es critico y debido a esto los daños fueron mayores a lo normal....");
		}
		}
	}
	
	
	//Sistema de hambre
	if(salud1 > 0 && salud1 < 101){
	hambre1 = hambre1 - (100/3);
	if(hambre1 < 0){
		hambre1=0;
	}
	}
	if(salud2 > 0 && salud2 < 101){
	hambre2 = hambre2 - (100/3);
	if(hambre2 < 0){
		hambre2=0;
	}
	}
	if(salud3 > 0 && salud3 < 101){
	hambre3 = hambre3 - (100/3);
	if(hambre3 < 0){
		hambre3=0;
	}
	}
	if(salud4 > 0 && salud4 < 101){
	hambre4 = hambre4 - (100/3);
	if(hambre4 < 0){
		hambre4=0;
	}
	}
	if(salud5 > 0 && salud5 < 101){
	hambre5 = hambre5 - (100/3);
	if(hambre5 < 0){
		hambre5=0;
	}
	}

//Hambre = 0
	if(hambre1 < 0){
			hambre1==0;
		}
	if(hambre2 < 0){
			hambre2==0;
		}
	if(hambre3 < 0){
			hambre3==0;
		}
	if(hambre4 < 0){
			hambre4==0;
		}
	if(hambre5 < 0){
			hambre5==0;
		}

//Hambre = 100
	if(hambre1 > 100){
			hambre1 = 100;
		}
	if(hambre2 > 100){
			hambre2 = 100;
		}
	if(hambre3 > 100){
			hambre3 = 100;
		}
	if(hambre4 > 100){
			hambre4 = 100;
		}
	if(hambre5 > 100){
			hambre5 = 100;
		}


//salud = 0
	if(salud1 < 0){
			salud1==0;
		}
	if(salud2 < 0){
			salud2==0;
		}
	if(salud3 < 0){
			salud3==0;
		}
	if(salud4 < 0){
			salud4==0;
		}
	if(salud5 < 0){
			salud5==0;
		}

// Pierdo vida si tengo hambre - Gano vida si no tengo hambre
	if(salud1 > 0 && salud1 < 101){

	if (hambre1 < 50 && salud1 > 0){
		salud1 = salud1 - 18;
		if(salud1 < 0){
			salud1==0;
		}
	}
	if (hambre1 > 80 && salud1 < 100){
		salud1 = salud1 + 15;
	}
	}
	if (salud1>100){
		salud1=100;
	}

	if(salud2 > 0 && salud2 < 101){

		if (hambre2 < 50 && salud2 > 0){
		salud2 = salud2 - 18;
	}
	if (hambre2 > 80 && salud2 < 100){
		salud2 = salud2 + 15;
		if (salud2>100){
			salud2=100;
		}
	}
	}
	if(salud2 < 0){
		salud2==0;
	}

	if(salud3 > 0 && salud3 < 101){

		if (hambre3 < 50 && salud3 > 0){
		salud3 = salud3 - 18;
	}
	if (hambre3 > 80 && salud3 < 100){
		salud3 = salud3 + 15;
		if (salud3>100){
			salud3=100;
		}
	}
	}
	if(salud3 < 0){
		salud3==0;
	}

	if(salud4 > 0 && salud4 < 101){

		if (hambre4 < 50 && salud4 > 0){
		salud4 = salud4 - 18;
	}
	if (hambre4 > 80 && salud4 < 100){
		salud4 = salud4 + 15;
		if (salud4>100){
			salud4=100;
		}
	}
	}
	if(salud4 < 0){
		salud4==0;
	}

	if(salud5 > 0 && salud5 < 101){

		if (hambre5 < 50 && salud5 > 0){
		salud5 = salud5 - 18;
	}
	if (hambre5 > 80 && salud5 < 100){
		salud5 = salud5 + 15;
		if (salud5>100){
			salud5==100;
		}
	}
	}
	if(salud5 < 0){
		salud5==0;
	}
	
	//Sistema Robo
	probrobo = rand() % 11;
	printf("\n");
	if(probrobo < 3){
		printf("\n TE ESTAN ROBANDO!!!!!!");
		printf("\nQue quieres hacer?");
			printf("\n 1=Defenderte / 0=Dejar que te roben: ");
			scanf("%d", &decrobo);
		switch(decrobo){
			case 1:
				probrobo2 = rand() % 11;
				if(probrobo2 > 2 && municion > 0){
					municion=municion - 1;
					printf("\n Te defendiste con exito de los ladrones...");
				}  
				if(probrobo2 <= 2 && municion > 0){
					printf("\n Fallaste el tiro....");
					printf("\n Los ladrones deciden asesinar a todo el grupo...");
					goto F;
				}
				if(municion < 1){
					printf("\n No tienes munición....");
					materiales = materiales - 7;
					cantcomida = cantcomida - 9;
					if(cantcomida < 0){
						cantcomida==0;
					}
					if(materiales < 0){
						materiales==0;
					}
				}
				break;
		
			case 0:
				printf("\n Decides dejar que te roben...");
				materiales = materiales - 7;
				cantcomida = cantcomida - 9;
				if(cantcomida < 0){
					cantcomida = 0;
				}
				if(materiales < 0){
					materiales = 0;
				}
				if (cantcomida<=0 && materiales<=0){
					printf("\n Debido a que no tienes nada que los ladrones puedan robar, estos deciden asesinar a todo el grupo...");
					goto F;
				}
				break;
				}
				}
	

if(cantcomida < 0){
	cantcomida = 0;
}

if(materiales < 0){
	materiales = 0;
}
		
	//menu 
	do{
	
	rta2==0;
	rta3==0;
	rta4==0;
	rta5==0;
	rtaE==0;

	printf("\n");
	printf("\n Que quieres hacer?");
	printf("\n 1. Continuar el viaje - 2. Revisar estado de los tripulantes");
	printf("\n 3. Revisar suministros - 4. Observar el paisaje");
	printf("\n 5. Revisar estado de la carreta - 6. Cazar");
	printf("\n Escriba aqui: ");
	scanf("%d", &rta2);

	printf("\n");
	printf("\n Opcion elegida: %d", rta2);
	printf("\n");
	
	switch(rta2){
		case 1:
		printf("\n Estas Seguro? 1=si/0=no: ");
		scanf("%d", &rta3);
		printf("\n");
		break;
		
		case 2:
		printf("\n Estado de la tripulacion: ");
		do {
			//Hambre = 100
			if(hambre1 > 100){
					hambre1 = 100;
				}
			if(hambre2 > 100){
					hambre2 = 100;
				}
			if(hambre3 > 100){
					hambre3 = 100;
				}
			if(hambre4 > 100){
					hambre4 = 100;
				}
			if(hambre5 > 100){
					hambre5 = 100;
				}
			printf("\n");
			printf("\n Opciones:");
			printf("\n 1=%s - 2= %s", nombre1, nombre2);
			printf("\n 3=%s - 4=%s", nombre3, nombre4);
			printf("\n 5=%s 0=Salir", nombre5);
			printf("\n");
			printf("\n A quien desea revisar?: ");
			scanf("%d", &rtaE);
			printf("\n");
			
			switch(rtaE){
				case 1:
				printf("\n %s: ", nombre1);
			if (salud1 <= 0){
				printf("\nEstado: MUERTO");
				getch();
			}
			if (salud1 > 0 && salud1 < 101) {
			printf("\n Salud: %f", salud1);
			printf("\n Hambre: %f", hambre1);
			printf("\n");
			printf("Desea alimentar a este tripulante? 1=si/0=no: ");
			scanf("%d", &rta4);
			if(rta4 == 1 && cantcomida > 2){
				if(hambre1 >= 100){
					printf("\n Esta persona no necesita ser alimentada....");
				}
				if(hambre1 < 100){
				hambre1 = hambre1 + 25;
				cantcomida = cantcomida - 3;
				}
			}
			if(rta4 == 1 && cantcomida < 2){
				printf("\n No tienes suficiente comida");
			} 
			 getch();	
		}

			break;
				
				case 2:
				printf("\n %s: ", nombre2);
			printf("\n %f", salud2);
			if (salud2 <= 0){
				printf("\nEstado: MUERTO");
				getch();
			}
			if (salud2 > 0 && salud2 < 101) {
			printf("\n Salud: %f", salud2);
			printf("\n Hambre: %f", hambre2);
			printf("\n");
			printf("Desea alimentar a este tripulante? 1=si/0=no: ");
			scanf("%d", &rta4);
			if(rta4 == 1 && cantcomida > 2){
				if(hambre2 >= 100){
					printf("\n Esta persona no necesita ser alimentada....");
				}
				if(hambre2 < 100){
				hambre2 = hambre2 + 25;
				cantcomida = cantcomida - 3;
				}
			}
			if(rta4 == 1 && cantcomida < 2){
				printf("\n No tienes suficiente comida");
			} 
				getch();
			}
		

				break;
				
				case 3:
				printf("\n %s: ", nombre3);
			if (salud3 <= 0){
				printf("\nEstado: MUERTO");
				getch();
			}
			if (salud3 > 0 && salud3 < 101) {
			printf("\n Salud: %f", salud3);
			printf("\n Hambre: %f", hambre3);
			printf("\n");
			printf("Desea alimentar a este tripulante? 1=si/0=no: ");
			scanf("%d", &rta4);
			if(rta4 == 1 && cantcomida > 2){
				if(hambre3 >= 100){
					printf("\n Esta persona no necesita ser alimentada....");
				}
				if(hambre3 < 100){
				hambre3 = hambre3 + 25;
				cantcomida = cantcomida - 3;
				}
			}
			if(rta4 == 1 && cantcomida < 2){
				printf("\n No tienes suficiente comida");
			} 
				getch();
		}

			break;
				
				case 4:
				printf("\n %s: ", nombre4);
			if (salud4 <= 0){
				printf("\nEstado: MUERTO");
				getch();
			}
			if (salud4 > 0 && salud4 < 101) {
			printf("\n Salud: %f", salud4);
			printf("\n Hambre: %f", hambre4);
			printf("\n");
			printf("Desea alimentar a este tripulante? 1=si/0=no: ");
			scanf("%d", &rta4);
			if(rta4 == 1 && cantcomida > 2){
				if(hambre4 >= 100){
					printf("\n Esta persona no necesita ser alimentada....");
				}
				if(hambre4 < 100){
				hambre4 = hambre4 + 25;
				cantcomida = cantcomida - 3;
				}
			}
			if(rta4 == 1 && cantcomida < 2){
				printf("\n No tienes suficiente comida");
			} 
				getch();
			}

			break;
				
				case 5:
				printf("\n %s: ", nombre5);
			if (salud5 <= 0){
				printf("\nEstado: MUERTO");
				getch();
			}
			if (salud5 > 0 && salud5 < 101) {

			printf("\n Salud: %f", salud5);
			printf("\n Hambre: %f", hambre5);
			printf("\n");
			printf("Desea alimentar a este tripulante? 1=si/0=no: ");
			scanf("%d", &rta4);
			if(rta4 == 1 && cantcomida > 2){
				if(hambre5 >= 100){
					printf("\n Esta persona no necesita ser alimentada....");
				}
				if(hambre5 < 100){
				hambre5 = hambre5 + 25;
				cantcomida = cantcomida - 3;
				}
			}
			if(rta4 == 1 && cantcomida < 2){
				printf("\n No tienes suficiente comida");
			} 
				getch();
			
			}

			
		printf("\n");
			break;		
			}
			} while(rtaE != 0);
		break;
		
		case 3:
		printf("\n Suministros: ");
		printf("\n Comida: %d", cantcomida);
		printf("\n Municion: %d", municion);
		printf("\n Materiales: %d", materiales);
		getch();
		printf("\n");
		break;
		
		case 4:
		printf("\n Paisaje: ");
		printf("\n Falta implementar :)");
		getch();
		printf("\n");
		break;
		
		case 5:
		printf("\n Carreta: ");
		printf("\n100-75 = Como Nuevo");
		printf("\n75-50 = Aceptable");
		printf("\n50-25 = Mal");
		printf("\n25-1 = PELIGROSO");

		printf("\nEl estado de la carreta es: %d", estC);

		if(estC < 100 && estC > 0){
		printf("\n Quieres reparar la carreta? 1=si/0=no: ");
		scanf("%d", &rta5);
		
		switch(rta5){
			case 1:
			if(materiales > 0 && materiales > 4){
			if(estC < 100){
				estC = estC + 15;
				materiales = materiales - 4;
				}
			if(estC >= 100){
				printf("\n La carreta no necesita ser reparada...");
			} 
				
			} else {
			printf("\nNo tienes suficientes materiales...");		
			}
				break;
				
			case 0:	
			printf("\nDecides no gastar materiales...");
			break;
		
		
		}
		printf("\n");
		}
		if(estC > 100){
			estC = 100;
		}
		getch();
		break;
		
		case 6:
			printf("\n Que materiales quieres conseguir?");
			printf("\n 1-Materiales 2-Comida: ");
			scanf("%d", &rta6);
			switch(rta6){
				case 1:
					//materiales
					probT = rand() % 101;
					printf("\n probT = %d", probT);
					printf("\nQuien intentara conseguir los materiales?");
					printf("\n 1=%s - 2= %s", nombre1, nombre2);
					printf("\n 3=%s - 4=%s", nombre3, nombre4);
					printf("\n 5=%s", nombre5);
					printf("\nEscriba su eleccion aqui: ");
					scanf("%d", &rtaT);
					printf("rtaT: %d", rtaT);
					if(probT <= 10){
						printf("\n Mientras talabas el arbol, este se cae sobre ti....");
						if (rtaT == 1){
							salud1 = 0;
						}
						if (rtaT == 2){
							salud2 = 0;
						}
						if (rtaT == 3){
							salud3 = 0;
						}
						if (rtaT == 4){
							salud4 = 0;
						}
						if (rtaT == 5){
							salud5 = 0;
						}
					}
					if(probT > 10 && probT <= 50){
						printf("\n Materiales conseguidos: 5");
						materiales = materiales + 5;
					}
					if(probT > 50 && probT <= 80){
						printf("\n Materiales conseguidos: 8");
						materiales = materiales + 8;	
					}
					if(probT > 80 && probT <= 99){
						printf("\n Materiales conseguidos: 10");
						materiales = materiales + 10;
					}
					if(probT == 100){
						printf("\nEncontraste un cofre enterrado bajo tierra...");
						printf("\n Materiales conseguidos: 40");
						printf("\n Balas conseguidas: 2");
						materiales = materiales + 40;
						municion = municion + 2;
					}
					getch();
					break;
					
					case 2:
						//comida
					probCom = rand() % 101;
					printf("\n probCom = %d", probCom);
					printf("Quien intentara conseguir la comida?");
					printf("\n 1=%s - 2= %s", nombre1, nombre2);
					printf("\n 3=%s - 4=%s", nombre3, nombre4);
					printf("\n 5=%s", nombre5);
					scanf("%d", &rtaCom);
					if(probCom <= 10){
						printf("\n Fuiste asesinado por un animal salvaje....");
						if (rtaCom == 1){
							salud1 = 0;
						}
						if (rtaCom == 2){
							salud2 = 0;
						}
						if (rtaCom == 3){
							salud3 = 0;
						}
						if (rtaCom == 4){
							salud4 = 0;
						}
						if (rtaCom == 5){
							salud5 = 0;
						}
					}
					if(probCom > 10 && probCom <= 50){
						printf("\n Comida conseguida: 5");
						cantcomida = cantcomida + 5;
					}
					if(probCom > 50 && probCom <= 80){
						printf("\n Comida conseguida: 8");
						cantcomida = cantcomida + 8;	
					}
					if(probCom > 80 && probCom <= 99){
						printf("\n Comida conseguida: 10");
						cantcomida = cantcomida + 10;
					}
					if(probCom = 100){
						printf("\nEncontraste una cabaña abandonada llena de comida...");
						printf("\n Comida conseguida: 40");
						printf("\n Balas conseguidas: 2");
						cantcomida = cantcomida + 40;
						municion = municion + 2;
					}
					getch();
					break;
			}
			getch();
			break;
		
	}
	
	}while (rta2 != 1);

	contdia++;
	}
	
F:
		printf("\n *_GAME OVER_*");
		printf("\n No pudiste superar el dia %d", i);
		printf("\nGRACIAS POR JUGAR :D");
		getch();
}

