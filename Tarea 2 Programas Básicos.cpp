/*
 Universidad Mariano Galvez de Guatemala
 Sede Antigua Guatemala
 Programacion I
 Karen Marleny Tejaxun Puc carne: 1290-22-13292

*/
#include <iostream>
#include <math.h>
#include <conio.h>
#include <string>
#include <windows.h>  
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
  }
using namespace std;

main (){
	int op,op2,op3;
	int d[15];
	int bina[15];
	int a,b,c3,d2,num,touper;
	int sum,res,mul,div;
	float kil,mill,m,pul,lib,kg;
	float num2;
	int arregloNum[20],tamanio = 0, i,j;
	int mitad = 0;
	int temporalfinal,bandera;
	string palabra, palindromo;
	string respuesta;
	int unidades, decenas,centenas,millar;
	int digitoex[20];
	int decimal, residuo,resultado;
    int filas;
    char opcion;
    int f=10,h=10;
    int saldo_inicial = 1000;
    int saldo, reintegro,opcion2,agregar;
    float lad,lad2,c;
    int an,ea,aac,edad;
    float fa,ce,k;
    string nom,apell;
    float peso,altura,IMC;
    float P,A,h2,Dia,r;
    int p1,p2,p3,p4;
	int val1,val2;
	
     
     
do
{
	system("cls");	
	cout<<"Menu"<<endl;	
	cout<<"1.calculos con dos numeros"<<endl;
	cout<<"2.Determinar valor par o impar"<<endl;
	cout<<"3.Conversion de medidas"<<endl;
	cout<<"4.Determinar si una palabra o un numero es palindromo"<<endl;
	cout<<"5.Determinar si un numero es arabigos a romanos"<<endl;
	cout<<"6.Conversion de numeros enteros a letras"<<endl;
	cout<<"7.Conversion de numeros enteros con decimal a letras"<<endl;
	cout<<"8.tabla de multiplicar"<<endl;
	cout<<"9.Todas las tablas de multiplicar del 1 a 10"<<endl;
	cout<<"10.Crear de forma grafica la multiplicacion manual"<<endl;
	cout<<"11.Conversion de numeros decimales a binario"<<endl;
	cout<<"12.Conversion de numeros decimales a hexadecimales"<<endl;
	cout<<"13.Crear Figuras Geometricas Basicas."<<endl;
	cout<<"14.Mover un punto en toda la pantalla"<<endl;
	cout<<"15.Simulacion de un Cajero (Automata)"<<endl;
	cout<<"16.Calcular la hipotenusa"<<endl;
	cout<<"17. Progra libre"<<endl;
	cout<<"18. Progra libre"<<endl;
	cout<<"19. progra libre"<<endl;
	cout<<"20. progra libre"<<endl;
	cout<<"21.salir"<<endl;
	cout<<"Ingrese su opcion"<<endl;
	cin>>op;
	
	switch(op){
		case 1 : cout<<"calculos con dos numeros"<<endl;
		         system("cls");
				 cout<<"ingrese el valor uno"<<endl; cin>>a;
		         cout<<"ingrese el  valor dos"<<endl; cin>>b;
				 sum = a + b;
				 res = a - b;
				 mul = a * b;
				 div = a / b;
				 cout<<"el valor de la suma es: "<<sum<<endl;
				 cout<<"el valor de la resta es: "<<res<<endl;
				 cout<<"el valor de la multiplicacion es: "<<mul<<endl;
				 cout<<"el valor de la division es: "<<div<<endl;	
				 system("pause");			 
		break;
		
		case 2 : cout<<"Determinar valor par o impar"<<endl;
		         system("cls");
				 cout<<"Ingrese Numero: ";
                 cin>>num;
                  
                 if ((num%2)==0){
                	cout<<"Par "<<endl;	
	               }
	               else
	               {
		              cout<<"Impar "<<endl;
	               } 
				 system("pause");   
        break;         
        
        case 3 : cout<<"Conversion de medidas"<<endl;
                system("cls");
				 cout<<"Menu de conversiones"<<endl;
                 cout<<"1.kilometros a millas - millas a kilometros"<<endl;
                 cout<<"2.metros a pulgadas - pulgadas a metros"<<endl;
                 cout<<"3.libras a kilos - kilos a libras"<<endl;
                 cout<<"4.salir"<<endl;
                 cout<<"ingrese su opcion"<<endl;
                 cin>>op2;
                 switch(op2){
                 	
                 	case 1 : cout<<"kilometros a millas"<<endl;
                 	         cout<<"millas a kilometros"<<endl;
							 cout<<"ingrese el valor que desea convertir: "<<endl; cin>>num;
                             kil = num * 0.621371;
                             mill  = num * 1.60934;
                             cout<<"la conversion de kilometros a millas es: "<<kil<<endl;
                             cout<<"la conversion de millas a kilometros es: "<<mill<<endl;
                 	break;
                 	
                 	case 2 : cout<<"metros a pulgadas"<<endl;
                 	         cout<<"pulgadas a metros"<<endl;
                 	         cout<<"ingrese el valor que desea convertir: "<<endl; cin>>num;
                 	         m = num * 39.3701;
                 	         pul = num * 0.0254;
                 	         cout<<"la conversion de metros a pulgadas: "<<m<<endl;
                 	         cout<<"la conversion de pulgadas a metros: "<<pul<<endl;
                 	break;
                 	
                 	case 3 : cout<<"libras a kilos"<<endl;
                 	         cout<<"kilos a libras"<<endl;
                 	         cout<<"ingrese el valor que desea convertir: "<<endl; cin>>num;
                 	         lib = num * 0.453592;
                 	         kil = num * 2.20462;
                 	         cout<<"la conversion de libras a kilos: "<<lib<<endl;
                 	         cout<<"la conversion de kilos a libras: "<<kil<<endl;
                 
					 break;         
                 	
                    default: 
					       cout<<"Error salir!!!!"<<endl; 
                     
				    }
				    system("pause");
        break;
        
        case 4 : cout<<"Programa de Palindromos"<<endl;
                 system("cls");
				 cout<<"ingrese un valor"<<endl;
                 cin>>tamanio;
                 mitad = tamanio/2;
                 cout<<"Mitad : "<<mitad<<endl;
                 for( i = 0 ; i < tamanio; i++){ 
                   cout<< "Ingrese numero"<<i<<":";
                   cin>>arregloNum[i];
                
                }
                temporalfinal = tamanio - 1;
                bandera = 0;
				for (i = 0; i<=mitad && bandera == 0; i++){
                	if (arregloNum[i] != arregloNum[temporalfinal]){
                	 bandera = 1;	               		
					}
					temporalfinal --;
				}
                 
                if (bandera == 0){
                	cout<<"El Arreglo es palindromo"<<endl;
				} 
                else
				{
					cout<<"El Arreglo no es palindromo"<<endl;
				}   
				
				cout<<"ingrese una palabra: ";
				cin>>palabra; 
			   	for (i = palabra.size() - 1; i >= 0; i--){
					cout<< palabra[i] <<endl;
					palindromo += palabra[i];
				}
				/*cout<<palindromo<<endl; */    
				
				if (palabra == palindromo){
					cout<<"La palabra "<<palabra<< " es palindromo"<<endl;
				}
				else 
				{
					cout<<"La palabra"<<palabra<< "no es palindromo"<<endl;
				}
				system("pause");				 
        break; 
        
        case 5 : cout<<"Determinar si un numero es arabigos a romanos"<<endl;
                system("cls");
				// M = 1000, C = 500, C = 100, L = 50, X = 10, V = 5, I = 1
				
				cout<<"ingrese un valor: "<<endl; cin>>num;
                
                unidades = num%10; num /= 10;
                decenas = num%10; num/= 10; 
                centenas = num%10; num/= 10;
                millar =  num%10; num/= 10;
	             
	            switch(millar){
	            	case 1 :
	            		cout << "M"<<endl;
	            	break;
	            	
	            	case 2 : 
	            	     cout<<"MM" <<endl;
	            	break;
	            	
	            	case 3 : 
	            	     cout<<"MMM" <<endl;
	            	break; 
				}
				
				switch(centenas){
					case 1 :
					     cout<<"C"<<endl;
					break;
					
					case 2 :
					     cout<<"CC"<<endl;
					break;
					
					case 3 :
					     cout<<"CCC"<<endl;
					break;
					
					case 4 :
					     cout<<"CD"<<endl;
					break;
					
					case 5 :
					     cout<<"D"<<endl;
					break;
					
					case 6 :
					     cout<<"DC"<<endl;
					break;
					
					case 7 :
					     cout<<"DCC"<<endl;
					break;
					
					case 8 :
					     cout<<"DCC"<<endl;
					break;
					
					case 9 :
					     cout<<"CM"<<endl;
					break;
					
					case 10 :
					     cout<<"M"<<endl;
					break;
				}
				
				switch (decenas){
					case 1 :
					     cout<<"X"<<endl;
					break;
					
					case 2 :
					     cout<<"XX"<<endl;
					break;
					
					case 3 :
					     cout<<"XXX"<<endl;
					break;
					
					case 4 :
					     cout<<"XL"<<endl;
					break;
					
					case 5 :
					     cout<<"L"<<endl;
					break;
					
					case 6 :
					     cout<<"LX"<<endl;
					break;
					
					case 7 :
					     cout<<"LXX"<<endl;
					break;
					
					case 8 :
					     cout<<"LXXX"<<endl;
					break;
					
					case 9 :
					     cout<<"XC"<<endl;
					break;
					
				}
				
				
				switch(unidades){
					case 1 :
					     cout<<"I"<<endl;
					break;
					
					case 2 :
					     cout<<"II"<<endl;
					break;
					
					case 3 :
					     cout<<"III"<<endl;
					break;
					
					case 4 :
					     cout<<"IV"<<endl;
					break;
					
					case 5 :
					     cout<<"V"<<endl;
					break;
					
					case 6 :
					     cout<<"VI"<<endl;
					break;
					
					case 7 :
					     cout<<"VII"<<endl;
					break;
					
					case 8 :
					     cout<<"VII"<<endl;
					break;
					
					case 9 :
					     cout<<"IX"<<endl;
					break;
					
					case 10 :
					     cout<<"X"<<endl;
					break;
				}
				system("pause"); 
		break;
        
        case 6 : cout<<"Conversion de numeros enteros a letras"<<endl;
                 system("cls");
				 cout<<"ingresar un valor"<<endl; cin>>num;
                 if((num<1)||(num>999)) 
				 {
				 cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
			     }
				 else
                 
                 {
                 if(num>=900)   {cout<<"NOVECIENTOS " ;num=num-900;
	             }
                 else 
	             if(num>=800)   
	            {
	             cout<<"OCHOCIENTOS " ;num=num-800;
	            }
                else 
	             if(num>=700)   
	             {
	              cout<<"SETECIENTOS " ;num=num-700;
	             }
                 else 
	             if(num>=600)  
	             {
	             cout<<"SEISCIENTOS " ;num=num-600;
		         }
                 else
	             if(num>=500)   
	             {
	              cout<<"QUINIENTOS "  ;num=num-500;
	             }
                 else 
	             if(num>=400)   
	             {
	             cout<<"CUATROCIENTOS "   ;num=num-400;
	             }
                 else 
	             if(num>=300)   
	             {
	              cout<<"TRESCIENTOS " ;num=num-300;
	             }
                 else 
	             if(num>=200)   
	             {
	             cout<<"DOSCIENTOS "  ;num=num-200;
	             }
                 else 
	             if(num>100)    
	             {
	             cout<<"CIENTO "  ;num=num-100;
	             }
                 else 
	             if(num==100) 
				  {
				  cout<<"CIEN"     ;num=num-100;
				  }
                 if(num>90) 
				 {
				 cout<<"NOVENTA Y "   ;num=num-90; 
				 }
                 if(num==90)   
				 {
				 cout<<"NOVENTA"  ;num=num-90; 
				 }  
                 if(num>80) 
				 {
				 cout<<"OCHENTA Y "   ;num=num-80; 
				 }
                 if(num==80)   
				 {
				 cout<<"OCHENTA"  ;num=num-80; 
				 }
                 if(num>70) 
				 {
				 cout<<"SETENTA Y "   ;num=num-70; 
				 }
                 if(num==70)   {cout<<"SETENTA"  ;num=num-70; }
                 if(num>60) {cout<<"SESENTA Y "   ;num=num-60; }
                 if(num==60)   {cout<<"SESENTA"  ;num=num-60; }
                 if(num>50) {cout<<"CINCUENTA Y " ;num=num-50; }
                 if(num==50)   {cout<<"CINCUENTA"    ;num=num-50; }
                 if(num>40) {cout<<"CUARENTA Y "  ;num=num-40; }
                 if(num==40)   {cout<<"CUARENTA" ;num=num-40; }
                 if(num>30) {cout<<"TREINTA Y "   ;num=num-30; }
                 if(num==30)   {cout<<"TREINTA"  ;num=num-30; }
                 if(num>20) {cout<<"VEINTI"       ;num=num-20; }
                 if(num==20)   {cout<<"VEINTE"       ;num=num-20; }
                 if(num>=16)    {cout<<"DIECI"        ;num=num-10; }
                 else if(num==15)   {cout<<"QUINCE"       ;num=num-15; }
                 else if(num==14)   {cout<<"CATORCE"  ;num=num-14; }
                 else if(num==13)   {cout<<"TRECE"        ;num=num-13; } 
                 else if(num==12)   {cout<<"DOCE"     ;num=num-12; }
                 else if(num==11)   {cout<<"ONCE"     ;num=num-11; }
                 else if(num==10)   {cout<<"DIEZ"     ;num=num-10; }      
                 if(num==9)    {cout<<"NUEVE"        ;num=num-9;  }
                 if(num==8)    {cout<<"OCHO"     ;num=num-8;  }
                 if(num==7)    {cout<<"SIETE"        ;num=num-7;  }
                 if(num==6)    {cout<<"SEIS"     ;num=num-6;  }
                 else if(num==5)    {cout<<"CINCO"        ;num=num-5;  }
                 else if(num==4)    {cout<<"CUATRO"       ;num=num-4;  }
                 else if(num==3)    {cout<<"TRES"     ;num=num-3;  }
                 else if(num==2)    {cout<<"DOS"      ;num=num-2;  }
                 else if(num==1)    {cout<<"UNO"      ;num=num-1;  }
                 }
                cout<<endl;
                system("pause");
        break;
        
        case 7 : cout<<"Conversion de numeros enteros con decimal a letras"<<endl;
                  system("cls");
                  system("pause");        
		break;
		
		case 8 : cout<<"Tabla de multiplicar"<<endl;
                  system("cls");
                 
                 cout<<"ingrese el valor a multiplicar en la tabla"<<endl; cin>>b;
				 
                for(a=1;a<=10;a++)
                {
                cout<<a<<"*"<<b<<"="<<a*b<<endl;
                }
                
                cout<<"GRACIAS POR VISITAR NUETRO PROGRAMA "<<endl;
                system("pause");
		break;
		
		case 9 : cout<<"Todas las tablas de multiplicar del 1 a 10"<<endl;
		         system("cls");
				 
				  for(a=1;a<=10;a++)
                {
                	cout<<"<<<<<<<<<<<<<<<<<<<<<<"<<endl;
                	cout<<"la tabla del: "<<a<<endl;
                	for (b=1;b<=10;b++){
					
                cout<<a<<"*"<<b<<"="<<a*b<<endl;
                   }
			    }    
		system("pause");
        break;
        
        case 10 : cout<<"Crear de forma gráfica la multiplicacion manual"<<endl;
                 system("cls");
                 
                 cout<<"1.primera forma"<<endl;
                 cout<<"2.segunda forma"<<endl;
                 cout<<"3.Salir"<<endl;
                 cout<<"ingrese una opcion"<<endl;
                 cin>>op;
                 switch(op){
				 case 1 : cout<<"Primera forma grafica"<<endl;
				 system("cls");
				 //intentelos xon valores no mas 10 abajo
                 //primera opcion
                 //el resultado es el correto pero el prodedimiento debajo no si se realiza con digitos arriba de 5
                 //recomiendo que lo intente con 12 X 12;
                 gotoxy(0,0);cout<<"ingrese el primer par de numeros"<<endl;
                 gotoxy(0,1);cout<<"primera numero (unicamente el primer digito): "<<endl; gotoxy(55,7);cin>>a;
                 gotoxy(0,2);cout<<"segundo numero (unimente el segundo digito del par): "<<endl; gotoxy(56,7);cin>>b;
				 gotoxy(0,3); cout<<"ingrese el segundo par de numeros"<<endl;
				 gotoxy(0,4);cout<<"primera numero (unicamente el primer digito): "<<endl;  gotoxy(55,8);cin>>c3;
				 gotoxy(0,5);cout<<"segundo numero (unimente el segundo digito del par): "<<endl; 		 gotoxy(56,8);cin>>d2;
				 gotoxy(0,6);cout<<"ingrese nuevamente el primer valor juntos: "<<endl; cin>>val1;
				 gotoxy(0,7);cout<<"ingrese nuevamente el segundo valor juntos: "<<endl; cin>>val2;
				 
				 gotoxy(54,8); cout<<"X";
				 gotoxy(54,9); cout<<"_______";
				 p1=b*d2;
				 p2=a*d2;
				 p3=b*c3;
				 p4=a*c3;
				 mul=val1*val2;
				 gotoxy(56,10);cout<<p1<<endl;
				 gotoxy(55,10);cout<<p2<<endl;
				 gotoxy(55,11);cout<<p3<<endl;
				 gotoxy(54,11);cout<<p4<<endl;
				 gotoxy(54,12); cout<<"_______";
				 gotoxy(53,13); cout<<mul<<endl;
                 cout<<endl;
                 system("pause ");
                 break;
				 
				 case 2: cout<<"segunda opcion grafica"<<endl;
				 system("cls");
				 //el más funcional a mi parecer 
				 cout<<"ingrese el primer numero: "<<endl; gotoxy(45,7);cin>>a;
	             cout<<"ingresa el segundo numero: "<<endl;gotoxy(45,8); cin>>b;
	             gotoxy(44,8); cout<<"X"<<endl;
				 gotoxy(45,9); mul=a*b;
	             gotoxy(45,9); cout<< mul<<endl;
	             system("pause ");
                 break;
				 }
			     system("pause ");
        break;
        
        case 11 : cout<<"Conversion de números decimales a binario"<<endl;
                  system("cls");
				  cout<<"ingrese un numero en base 10: "<<endl;
                  cin>>d[0];
                  
                  if(d[0] == 1) {
                  	cout<< 1;
				  }
                  else
                  {
                  	if(d[0] == 0){
					  cout<<0;
					  }
					  else
					  {
					  
                  for( i = 0; d[i] !=1 ;i++){
				  
                  d[i+1] = d[i]/2;
                  bina[i] = d[i]%2;
				  if(d[i+1] == 1) bina[i+1] = 1;
				  
				  }
				  
				  for (int m = i; m>=0; m--){
				  	cout<<bina[m];
				  }
			     }
			 }
			     cout<<endl;
			system("pause");	  
		break;
        
        case 12 : cout<<"Conversion de números decimales a hexadecimales"<<endl;
        	system("cls");
        	cout<<"introduce un numero decimal a convertir: "<<endl;
        	cin>>decimal;
        	
        	do{
        		residuo = decimal % 16;
				resultado = decimal / 16;
				digitoex[i] = residuo;
				decimal = resultado;
				i++; 
			}while(resultado>15);
			
			digitoex[i]= resultado;
			
			cout<<"El equivalente en Hexadecimal es :"<<endl;
			for( j = i; j>= 0; j--){
				if(digitoex[j] == 10)
				{
					cout<<"A"<<endl;
				}
				else if(digitoex[j] == 11)
				{
					cout<<"B"<<endl;
				}
				else if(digitoex[j]==12)
				{
					cout<<"C"<<endl;
				}
				else if (digitoex[j]==13)
				{
					cout<<"D"<<endl;
				}
				else if (digitoex[j]==14)
				{
					cout<<"E"<<endl;
				}
				else if (digitoex[j]==15)
				{
					cout<<"F"<<endl;
				}
				else
				{
					cout<<digitoex[j];
				}
				
			}
			cout<<endl;
        	system("pause");
        break;
        
        case 13 : cout<<"Crear Figuras Geometricas Basicas"<<endl;
                   system("cls");
                   cout <<"\t\t\t\t\tfiguras en c++"<<endl;
                   
				   cout<<"menu de figuras"<<endl;
				   cout<<"1.triangulo"<<endl;
				   cout<<"2.cuadrado"<<endl;
				   cout<<"3.Rectangulo"<<endl;
				   
				   cout<<"ingrese la opcion"<<endl; cin>>op3;
				  switch(op3){
				   
				   case 1 :
				   cout<<"\n\nIngrese el numero de filas de la figura: ";
                   cin>>filas;
                   cout<<"\n\n";
				   for(i=0; i <filas; i++)
				   {
					   for(j=0 ; j<filas-1 ; j++)
					   {
					    	cout<<"";
					   }
				   	   for(j=0; j<i*2+1; j++)
				   	   {
				   	   	    cout<<"*";
						 
					   }
					       cout<<"\n";
				   }
				   
				   
                 
				 break;
				 
				 case 2 : 
				 cout<<"\n\nIngrese el numero de filas de la figura: ";
                 cin>>filas;
                 cout<<"\n\n";
                 for(i = 0; i<=filas; i++)
                 {
                 	for(j=0; j<=filas; j++)
                 	{
                 		cout<<"* ";
					 }
					 cout<<"\n";
				 }
				 break;
				 
				 case 3 :
				 	 cout<<"\n\nIngrese el numero de filas de la figura: ";
                     cin>>filas;
                     cout<<"\n\n";
				 	for(i = 0; i<filas; i++ )
				 	{
				 		for(j=0; j<filas; j++)
				 		{
				 			if((i==0)||(j==0)||(i==filas-1)||(j==filas-1))
				 			{
				 				cout<<"*";
							 }
							 else
							 {
							 	cout<<" ";
							 }
						 }
						 cout<<"\n";
					 }
				 break ;
				 
			}
				   system("pause");
                          
		break;
		
		case 14 : cout<<"Mover un punto en toda la pantalla"<<endl;
		           system("cls");
		           while(opcion != 'q')
		           {
		           	system("cls");
		           	 gotoxy(f,h); cout<<"*";
		           	 opcion=getch();
		           	 switch(opcion)
		           	 {
		           	 	
		           	 	case 'w': h--; break;
		           	 	case 's': h++; break; 
						case 'a': f--; break;
						case 'd': f++; break;
						}
				   }
                   system("pause");
		break;
		
		case 15 : cout<<"Simulacion de un Cajero (Automata)"<<endl;
		          system("cls");
		          cout<<"\t bienvenido a su cajero virtual";
		          cout<<"Escoja una opcion: "<<endl;
		          cout<<"1.Depositar en cuenta"<<endl;
		          cout<<"2.Reintegro"<<endl;
		          cout<<"3.Ver saldo de cuenta"<<endl;
		          cout<<"4.salir"<<endl;
		          cout<<"opcion"<<endl;
		          cin>>opcion2;
		          
		          if(opcion2==1){
		          	cout<<"ingrese la cantidad que depositara Q: "<<endl;; cin>>agregar;
		          	
		          	saldo = saldo_inicial + agregar;
		          	cout<<"la cantidad disponible en la cuenta Q: "<<saldo<<endl;
				  }
				  else if(opcion2==2)
				  {
				  	cout<<"cantidad que desea retirar Q: "<<endl; cin>>reintegro;
				  	if(reintegro>1000){
				  		cout<<"la cantidad es mayor a Q.1000.00, digite de nuevo la cantidad a retirar:"<<endl;
				  		cin>>reintegro;
					  }
					  saldo= saldo_inicial - reintegro;
					  cout<<"cantida disponible en la cuenta Q: "<<saldo<<endl;
				  }
				  else if(opcion2==3)
				  {
				  	cout<<"la cantidad disponible en la cuenta es de Q: "<<saldo_inicial<<endl;
				  	
				  }
				  else if (opcion2==0)
				  {
				  	cout<<"GRACIAS POR UTILIZAR NUESTRO CAJERO AUTOMATICO"<<endl;
				  }
				  else
				  {
				    cout<<"esta opcion es invalida intentelo de nuevo"<<endl;
				  }
				  cin.get();
				   
		          system("pause");
		break;
		
		case 16 : cout<<"Calcular la hipotenusa"<<endl;
		          system("cls");
		          cout<<"ingrese el lado a"<<endl; cin>>lad;
		          cout<<"ingrese el lado b"<<endl; cin>>lad2;
		          c=sqrt(pow(lad,2)+pow(lad2,2));
		          cout<<"la hipotenusa del triangulo rectangulo es de: "<<c<<endl;
		          system("pause");
		break;
		
		case 17 : cout<<"Programa libre etapas de la edad"<<endl;
		          system("cls");
		          cout<<"ingrese el anio de nacimiento: "<<endl; cin>>an;
		          cout<<"ingrese el anio actual: "<<endl; cin>>ea;
		          
		          edad=ea-an;
		          cout<<"la edad actual es: "<<edad<<endl;
		          
		          if((edad>=5)&&(edad<=13))
                  {
                  cout<<"etapa de ninez"<<endl;
                  }
                  if((edad>=14)&&(edad<=17))
                  {
                  cout<<"etapa de adolescencia"<<endl;
                  }
                  if((edad>=18)&&(edad<=35))
                  {
                   cout<<"etapa adulto joven"<<endl;
                  }
                  if((edad>=36)&&(edad<=64))
                  {  
                     cout<<"etapa de adulto"<<endl;
                  }
                  if(edad>=65)
                  {
                   cout<<"etapa de la tercera edad"<<endl;
                  }
                 
					
		          system("pause");
		break;
			
        case 18 : cout<<"Programa Libre"<<endl;
                  system("cls");
                  do 
                  {
                  system("cls");
                   cout<<"MENÚ DE TEMPERATURAS"<<endl;
                   cout<<"1.Celsius a Fahrenheit"<<endl;
                   cout<<"2.Celsius a Kelvin"<<endl;
                   cout<<"3.Fahrenheit a Celsius"<<endl;
                   cout<<"4.SALIR"<<endl;
                   cout<<"Ingrese la opcion"<<endl;
                   cin>>op;

                   switch(op)
                   {
                     case 1: cout<<"Celsius a Fahrenheit"<<endl;
      
                      cout<<"ingrese los grados celsius:"<<endl;
                      cin>>ce;
 
                      fa=((1.8)*ce)+32;
                       cout<<"los grados en fahrenheit son: "<<fa<<endl;
                       getch();
                       break;
    
                     case 2: cout<<"Celsius a Kelvin"<<endl;
      
                       cout<<"ingrese los grados celsius: "<<endl;
                       cin>>ce;
   
                       k=ce+273.15;
   
                       cout<<"los grados  Kelvin son: "<<k<<endl;
                       getch();
                       break;
   
                       case 3: cout<<"Fahrenheit a Celsius"<<endl;
     
                       cout<<"ingrese los grados fahrenheit: "<<endl;
                       cin>>fa;
  
                       ce = ((fa-32)*0.55);

                      cout<<"los grados celsius son"<<ce<<endl;
                      getch();
                   break;
                   }
                   }
                    while(op<=4);
                   system("pause");
	   	break;
        
        case 19 : cout<<"Programa Libre"<<endl;
                  system("cls");
                    cout<<"programa de indice de masa corporal"<<endl;
                     cout<<"-----------------------------------"<<endl;

                    cout<<"ingrese el nombre del paciente"<<endl;
                    cin>>nom;

                    cout<<"ingrese los apellidos del paciente"<<endl;
                    cin>>apell;


                    cout<<"ingrese el anio de nacimiento"<<endl;
                    cin>>an;

                    cout<<"ingrese el anio actual: "<<endl;
                    cin>>aac;

                    cout<<"ingrese el peso en libras: "<<endl;
                    cin>>peso;

                    cout<<"ingrese la altura en metros: "<<endl;
                    cin>>altura;

                    ea=aac-an;
                    kg=peso*0.453592;
                    IMC=kg/pow(altura,2);

                    cout<<"la edad actual es de: "<<ea<<endl;
                    cout<<"el peso en kilogramos es: "<<kg<<endl;
                    cout<<"el indice de masa corporal es: "<<IMC<<endl;
                    
					if(IMC<18,5)
                    {
                     cout<<"bajo peso"<<endl;
                     cout<<"cuide su salud"<<endl;
                    }
                    if((IMC<=18,5)&&(IMC>=24,9))
                    {
                     cout<<"peso normal"<<endl;
                     cout<<"ame su salud"<<endl;
                    }
                    if((IMC>=25,0)&&(IMC<=29,9))
                    {
                     cout<<"sobrepeso"<<endl;
                     cout<<"este al pendiente de su alimentacion"<<endl;
                    }
                    if((IMC>=30,0)&&(IMC<=34,5))
                    {
                      cout<<"obesidad grado I"<<endl;
                    }
                    if((IMC>=35,0)&&(IMC<=39,9))
                    {
                     cout<<"obesidad nivel II"<<endl;
                     cout<<"segun la OMS"<<endl;
                    }
                    if(IMC>=40,0)
                    {
                     cout<<"obesidad grado III"<<endl;
                     cout<<"segun la OMS"<<endl;
                    }
                    
                     
                  system("pause");
        break;
        
        case 20 : cout<<" Programa Libre calculo de Area y perimetro"<<endl;
                  system("cls");
                  do
                  {
				  
				  cout<<"menu de area y perimetro"<<endl;
                  cout<<"________________________"<<endl;
                  cout<<"1.Area y perimetro TRIANGULO"<<endl;
                  cout<<"2.Area y perimetro CUADRADO"<<endl;
                  cout<<"3.Area y perimetro RECTANGULO"<<endl;
                  cout<<"4.Area y Perimetro CIRCULO"<<endl;
                  cout<<"5.SALIR"<<endl;
                  cout<<"ingrese la opcion que desea ejecutar: "<<endl;
                  cin>>op;
                  
                  switch(op){
                  	case 1 : cout<<"Area y perimetro TRIANGULO"<<endl;
                  	 system("cls");
                  	 cout<<"ingrese los lados de triangulo: "<<endl; cin>>lad;
                  	 cout<<"ingrese la base de la figura: "<<endl; cin>>b;
                  	 cout<<"ingrese la altura de la figura:"<<endl; cin>>h2;
                  	 P=lad+lad+lad;
                  	 A=(b*h2/2);
                  	 cout<<"el perimetro de la figura es: "<<P<<endl;
                  	 cout<<"el area de la figura es: "<<A<<endl;
                  	 
                  	 system("pause");
                  
					break;
                  	
                  	case 2 : cout<<"Area y perimetro CUADRADO"<<endl;
                  	 system("cls");
                  	 cout<<"ingrese los lados de Cuadrado: "<<endl; cin>>lad;
    
                  	 P=4*lad;
                  	 A=pow(lad,2);
                  	 cout<<"el perimetro de la figura es: "<<P<<endl;
                  	 cout<<"el area de la figura es: "<<A<<endl;
                  	 system("pause");
                  	break;   
                  	
                  	case 3 : cout<<"Area y perimetro RECTANGULO"<<endl;
                  		 system("cls");
                  		 cout<<"ingrese el lado mas peque del cuadrado: "<<endl; cin>>lad;
                  		 cout<<"ingrese el lado mas grande del cuadrado: "<<endl; cin>>lad2;
                  		 P=(2*lad)+ (2*lad2);
                  		 A=lad*lad2;
                  		 cout<<"el perimetro de la figura es: "<<P<<endl;
                  		 cout<<"el area de la figura es: "<<A<<endl;
                  	     system("pause");
                  	break;   
                  	
                  	case 4 : cout<<"Area y Perimetro CIRCULO"<<endl;
                  	    system("cls");
                  	    cout<<"ingrese el diametro del circulo: "<<endl; cin>>Dia;
                  	    r=Dia/2;
                  	    cout<<"radio igual a: "<<r<<endl;
                  	    P=Dia*3.1416;
                  	    A=3.1416*pow(r,2);
                  	    cout<<"el perimetro de la figura es: "<<P<<endl;
                  	    cout<<"el area de la figura es: "<<A<<endl;
                  	    system("pause");
                  	break;
                  	
                  	default :
                  		cout<<"Error Opcion invalida "<<endl;
                  		cout<<"SALIR"<<endl;
                  		
			}
			}
			while(op<=5);
             system("pause");    
        break;
        
		default:
			cout<<"esta opcion es invalida!!!"<<endl;
	}

}

while(op<=20);
system("pause");
}
