# bingo-cpp
English:
The topic of the project was to create a Bingo game in C++ with a 5x5 board - BINGO 75 (classic). This is a game in which players circle the drawn numbers on a printed paper board with numbers.

Bingo may come from a game called lotto, popular in Italy in 1530. The word bingo comes from a corruption of the word beano, the name of a game similar to bingo, played in the USA in the 1920s. The name beano comes from the English word bean (bean), because it is beans were used to cover the read digits. The name bingo came about when an excited player shouted Bingo! instead of Beano!.

The project was written in C++.

The graphical interface was created using the multi-platform wxWidgets version 3.0.5 library for creating window applications.

As a development environment, we used Code::Blocks - a cross-platform, integrated development environment licensed under the GNU version 20.03.

Instructions for use After starting the program, the Bingo game window appears. To start, press the start button (Figure 1). Then our board is filled with numbers from 1 to 75. The first column contains non-repeating numbers from 1 to 15, the second from 16 to 30, the third from 31 to 45, the fourth from 46 to 60, the fifth from 61 to 75 (Figure 2). At the same moment, the clock at the bottom of the screen starts counting down. Next, we need to press the "Random" button (Figure 3). After pressing it, four random numbers from the range 1 to 75 will appear. Then we have to look for matching numbers on our board and those drawn after pressing the draw button. If two numbers are the same, click on the field on the board that has its equivalent among the four currently drawn numbers (Figure 4). If the numbers matched, the box will change to an "Ok" sign. To win, we must get five "Ok" pictures in one line: horizontally, vertically or diagonally (Figure 5). If we manage to circle five boxes at the end, the message "Bingo!" will appear. indicating victory. To end the game, we can press the restart button and start from the beginning. Then the whole game will restart, the clock at the bottom and the draw counter will reset to zero (Figure 1).

Polish:
Tematem projektu było stworzenie w c++ gry Bingo z planszą o rozmiarach 5x5 - BINGO 75 (klasyczne).
Jest to gra w której gracze na wydrukowanej papierowej planszy z liczbami zakreślają wylosowane
liczby.

Bingo może pochodzić od gry zwanej lotto, popularnej we Włoszech w roku 1530. Słowo bingo pochodzi
od zniekształcenia słowa beano, nazwy gry podobnej do bingo, granej w USA w latach 20. Nazwa beano
pochodzi od angielskiego słowa bean (fasola), gdyż to właśnie ziarna fasoli były wykorzystywane do
przykrywania wyczytanych cyfr. Nazwa bingo powstała, gdy podniecony gracz wykrzyczał Bingo!
zamiast Beano!.

Projekt napisany został w języku C++.

Interfejs graficzny stworzony został za pomocą wieloplatformowej biblioteki wxWidgets w wersji 3.0.5
służącej do tworzenia aplikacji okienkowych.

Jako środowiska programistycznego użyliśmy Code::Blocks – wieloplatformowego, zintegrowanego środowiska
programistycznego na licencji GNU w wersji 20.03.

Instrukcja użytkowania
Po uruchomieniu programu wyskakuje okno gry Bingo. Aby rozpocząć wciskamy wciskamy przycisk
start (rysunek 1). Następnie nasza plansza zapełnia się liczbami od 1 do 75. W pierwszej kolumnie
występują liczby niepowtarzające się od 1 do 15, w drugiej od 16 do 30, w trzeciej od 31 do 45, w
czwartej od 46 do 60, w piątej od 61 do 75 (rysunek 2). W tym samym momencie zegar na dole ekranu
zaczyna odliczanie czasu. Dalej musimy wcisnąć guzik „Losuj” (rysunek 3). Po naciśnięciu go pojawią
się cztery losowe liczby z zakresu 1 do 75. Następnie musimy szukać pasujących liczb na naszej planszy
oraz tych wylosowanych po wciśnięciu guzika losuj. Jeśli dwie liczby będą takie same, klikamy pole na
planszy które posiada swój odpowiednik wśród czterech obecnie wylosowanych liczb (rysunek 4). Jeśli
liczby do siebie pasowały, pole zmieni się na znak „Ok”. Aby wygrać musimy uzyskać pięć obrazków
„Ok” w jednej linii: poziomo, pionowo lub na ukos (rysunek 5). Jeśli uda nam się zakreślić pięć pól
na koniec, pojawi się komunikat „Bingo!” świadczący o wygranej. Aby zakończyć grę możemy wcisnąć
przycisk restart i zacząć od początku. Wtedy cała gra się zrestartuje, zegar na dole oraz licznik losowań
się wyzerują (rysunek 1).

