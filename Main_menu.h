
// Main_menu.h
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <fstream>
#include <string>
#include <conio.h>
#include <vector>
#include <sstream>
#include "class_player.h"
//using namespace std;


Player login();	/*funkcja pozwala na zalogowanie do gry lub granie jako gosc*/
void Display_main_menu();	/* funkcja wyswietla menu glowne*/
void initialize();	/*funkcja puszczana zawsze na poczatku dzialania programu

wczytuje sie menu glowne oraz wszystkie opcje z nim zwiazane
byc moze w przyszlosci przed menu bedzie wyswietlac sie jeszcze jakas animacja

pozwala tez na wybor i obsluge opcji w menu glownym: gra, ustawienia, statystyki, wyjscie
*/
void play();
/*
funkcja obslugujaca caly proces gry:asd
wybor gry, wybor stolu, ustawienia nastepnej gry, gra, odejscie od stolu
*/

void settings();
/*
ustawienie uczciwosci krupiera
liczb talii w bucie
i w sumie nie wiem czego jeszcze, trzeba isc do kasyna zeby zrobic research :D


*/

void stats();
/*
pokazuje statystyki ze wszystkich odbytych gier w tym programie:

bilans kasyna
bilans zsumowany wszystkich graczy
winratio kasyna

i osobno dla kazdego zarejestrowanego gracza:

bilans, winratio, miejsce w rankingu (parametrem jest bilans)

*/


void exit_game();
/*
wyjscie z programu
*/

int choose_game();
