# bingo-cpp
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

