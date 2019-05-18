#include <stdio.h> 
#include <stdlib.h> 
#include<math.h> 
int main() 
{ 
float okon, balc, etash; 
float cenaok=100, cenabalc=150; 
double plok = 2.15*1.5, plbalc = 0.7*2.15; 
printf("Vvedite kol-vo okon\n"); 
scanf("%f", &okon); 
printf("Vvedite kol-vo balconov\n"); 
scanf("%f", &balc); 
printf("Vvedite etash\n"); 
scanf("%f", &etash); 
float nacenka =0.15*(etash-1)+1; 
printf("Obshaya ploshad' zasteklenia=%fm2\n", plok*okon + plbalc * balc); 
printf("Stoimost' zasteklenia okon=%f$\n", okon*cenaok*nacenka); 
printf("Stoimost' ustanovki balc dveri=%f$\n", balc*cenabalc*nacenka); 
printf("Nacenka=%f%%\n", (round((nacenka-1) * 100))); 
printf("Obshaya stoimost'=%f$\n", ((okon*cenaok) + (balc*cenabalc))*nacenka); 
printf("Kompaniya SV-Svet, Minsk, Yankovskogo-4\n+375292530101 - Artyom, Director\n"); 
return 0; 
}
