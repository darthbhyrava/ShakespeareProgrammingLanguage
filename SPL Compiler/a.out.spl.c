// 4.spl
// compiled with splc.py (c) Sam Donow 2013-2015
#include <stdio.h>
#include <math.h>
#include "include/mathhelpers.h"
int condition = 0;
char inputbuffer[BUFSIZ];
int main() {

int Romeo = 2;
int Juliet = 2;
int Hamlet = 2;
int Ghost = 2;
int Macbeth = 0;
act1: {
goto act_1_scene1;
}
act_1_scene1: {
;
Juliet = 8 ;
Juliet = (square(Juliet) - 2) ;
fprintf(stdout, "%c", (char)Juliet);
fgets(inputbuffer, BUFSIZ, stdin);
sscanf(inputbuffer, "%d", &Ghost);
Romeo = 2 ;

goto act2;

}
act2: {
goto act_2_scene1;
}
act_2_scene1: {
condition = (Romeo) > (Ghost);
if (condition) {
 goto act_2_scene5;
 }
Hamlet = (int)sqrt(Romeo) ;
Juliet = 2 ;

goto act_2_scene2;

}
act_2_scene2: {
condition = (Juliet) > (Hamlet);
if (condition) {
 goto act_2_scene3;
 }
condition = ((Romeo % Juliet)) == (0);
if (condition) {
 goto act_2_scene4;
 }
Juliet = (Juliet + 1) ;
goto act_2_scene2;

goto act_2_scene3;

}
act_2_scene3: {
;
Hamlet = (0 - (-8 + -2)) ;
fprintf(stdout, "%c", (char)Hamlet);

goto act_2_scene4;

}
act_2_scene4: {
;
Romeo = (Romeo + 1) ;
goto act_2_scene1;

goto act_2_scene5;

}
act_2_scene5: {
;

}
}
