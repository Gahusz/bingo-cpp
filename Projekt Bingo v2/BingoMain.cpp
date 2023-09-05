/***************************************************************
 * Name:      BingoMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Konrad Angelo ()
 * Created:   2023-01-06
 * Copyright: Konrad Angelo ()
 * License:
 **************************************************************/
#include <iostream>
#include <cstdlib>
#include "BingoMain.h"
#include <wx/msgdlg.h>
#undef _
#define _(s) wxString::FromUTF8 (s)
//(*InternalHeaders(BingoDialog)
#include <wx/bitmap.h>
#include <wx/font.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/settings.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(BingoDialog)
const long BingoDialog::ID_STATICBITMAP1 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON26 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON27 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON28 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON29 = wxNewId();
const long BingoDialog::ID_BUTTON3 = wxNewId();
const long BingoDialog::ID_STATICTEXT1 = wxNewId();
const long BingoDialog::ID_STATICTEXT2 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON1 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON2 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON3 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON4 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON5 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON6 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON7 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON8 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON9 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON10 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON11 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON12 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON13 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON14 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON15 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON16 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON17 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON18 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON19 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON20 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON21 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON22 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON23 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON24 = wxNewId();
const long BingoDialog::ID_BITMAPBUTTON25 = wxNewId();
const long BingoDialog::ID_BUTTON2 = wxNewId();
const long BingoDialog::ID_BUTTON1 = wxNewId();
const long BingoDialog::ID_BUTTON4 = wxNewId();
const long BingoDialog::ID_STATICTEXT3 = wxNewId();
const long BingoDialog::ID_TIMER1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(BingoDialog,wxDialog)
    //(*EventTable(BingoDialog)
    //*)
END_EVENT_TABLE()

BingoDialog::BingoDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(BingoDialog)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* FlexGridSizer2;
    wxGridSizer* GridSizer1;

    Create(parent, wxID_ANY, _("GRA BINGO 75"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
    FlexGridSizer1 = new wxFlexGridSizer(8, 1, 0, 0);
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("Pictures\\Bin.bmp")).Rescale(wxSize(216,70).GetWidth(),wxSize(216,70).GetHeight())), wxDefaultPosition, wxSize(216,70), 0, _T("ID_STATICBITMAP1"));
    FlexGridSizer1->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    BitmapButton25 = new wxBitmapButton(this, ID_BITMAPBUTTON26, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON26"));
    BoxSizer1->Add(BitmapButton25, 1, wxALL|wxEXPAND, 5);
    BitmapButton26 = new wxBitmapButton(this, ID_BITMAPBUTTON27, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON27"));
    BoxSizer1->Add(BitmapButton26, 1, wxALL|wxEXPAND, 5);
    BitmapButton27 = new wxBitmapButton(this, ID_BITMAPBUTTON28, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON28"));
    BoxSizer1->Add(BitmapButton27, 1, wxALL|wxEXPAND, 5);
    BitmapButton28 = new wxBitmapButton(this, ID_BITMAPBUTTON29, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON29"));
    BoxSizer1->Add(BitmapButton28, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer2 = new wxFlexGridSizer(3, 1, 0, 0);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    Button3 = new wxButton(this, ID_BUTTON3, _("LOSUJ"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    Button3->SetForegroundColour(wxColour(255,255,255));
    Button3->SetBackgroundColour(wxColour(0,0,238));
    BoxSizer3->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer2->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Liczba Losowań"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    FlexGridSizer2->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    FlexGridSizer2->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(BoxSizer1, 1, wxALL|wxEXPAND, 5);
    GridSizer1 = new wxGridSizer(5, 5, 0, 0);
    BitmapButton0 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    GridSizer1->Add(BitmapButton0, 1, wxALL|wxEXPAND, 5);
    BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON2, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
    GridSizer1->Add(BitmapButton1, 1, wxALL|wxEXPAND, 5);
    BitmapButton2 = new wxBitmapButton(this, ID_BITMAPBUTTON3, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
    GridSizer1->Add(BitmapButton2, 1, wxALL|wxEXPAND, 5);
    BitmapButton3 = new wxBitmapButton(this, ID_BITMAPBUTTON4, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
    GridSizer1->Add(BitmapButton3, 1, wxALL|wxEXPAND, 5);
    BitmapButton4 = new wxBitmapButton(this, ID_BITMAPBUTTON5, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON5"));
    GridSizer1->Add(BitmapButton4, 1, wxALL|wxEXPAND, 5);
    BitmapButton5 = new wxBitmapButton(this, ID_BITMAPBUTTON6, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON6"));
    GridSizer1->Add(BitmapButton5, 1, wxALL|wxEXPAND, 5);
    BitmapButton6 = new wxBitmapButton(this, ID_BITMAPBUTTON7, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON7"));
    GridSizer1->Add(BitmapButton6, 1, wxALL|wxEXPAND, 5);
    BitmapButton7 = new wxBitmapButton(this, ID_BITMAPBUTTON8, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON8"));
    GridSizer1->Add(BitmapButton7, 1, wxALL|wxEXPAND, 5);
    BitmapButton8 = new wxBitmapButton(this, ID_BITMAPBUTTON9, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON9"));
    GridSizer1->Add(BitmapButton8, 1, wxALL|wxEXPAND, 5);
    BitmapButton9 = new wxBitmapButton(this, ID_BITMAPBUTTON10, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON10"));
    GridSizer1->Add(BitmapButton9, 1, wxALL|wxEXPAND, 5);
    BitmapButton10 = new wxBitmapButton(this, ID_BITMAPBUTTON11, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON11"));
    GridSizer1->Add(BitmapButton10, 1, wxALL|wxEXPAND, 5);
    BitmapButton11 = new wxBitmapButton(this, ID_BITMAPBUTTON12, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON12"));
    GridSizer1->Add(BitmapButton11, 1, wxALL|wxEXPAND, 5);
    BitmapButton12 = new wxBitmapButton(this, ID_BITMAPBUTTON13, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON13"));
    GridSizer1->Add(BitmapButton12, 1, wxALL|wxEXPAND, 5);
    BitmapButton13 = new wxBitmapButton(this, ID_BITMAPBUTTON14, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON14"));
    GridSizer1->Add(BitmapButton13, 1, wxALL|wxEXPAND, 5);
    BitmapButton14 = new wxBitmapButton(this, ID_BITMAPBUTTON15, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON15"));
    GridSizer1->Add(BitmapButton14, 1, wxALL|wxEXPAND, 5);
    BitmapButton15 = new wxBitmapButton(this, ID_BITMAPBUTTON16, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON16"));
    GridSizer1->Add(BitmapButton15, 1, wxALL|wxEXPAND, 5);
    BitmapButton16 = new wxBitmapButton(this, ID_BITMAPBUTTON17, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON17"));
    GridSizer1->Add(BitmapButton16, 1, wxALL|wxEXPAND, 5);
    BitmapButton17 = new wxBitmapButton(this, ID_BITMAPBUTTON18, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON18"));
    GridSizer1->Add(BitmapButton17, 1, wxALL|wxEXPAND, 5);
    BitmapButton18 = new wxBitmapButton(this, ID_BITMAPBUTTON19, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON19"));
    GridSizer1->Add(BitmapButton18, 1, wxALL|wxEXPAND, 5);
    BitmapButton19 = new wxBitmapButton(this, ID_BITMAPBUTTON20, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON20"));
    GridSizer1->Add(BitmapButton19, 1, wxALL|wxEXPAND, 5);
    BitmapButton20 = new wxBitmapButton(this, ID_BITMAPBUTTON21, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON21"));
    GridSizer1->Add(BitmapButton20, 1, wxALL|wxEXPAND, 5);
    BitmapButton21 = new wxBitmapButton(this, ID_BITMAPBUTTON22, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON22"));
    GridSizer1->Add(BitmapButton21, 1, wxALL|wxEXPAND, 5);
    BitmapButton22 = new wxBitmapButton(this, ID_BITMAPBUTTON23, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON23"));
    GridSizer1->Add(BitmapButton22, 1, wxALL|wxEXPAND, 5);
    BitmapButton23 = new wxBitmapButton(this, ID_BITMAPBUTTON24, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON24"));
    GridSizer1->Add(BitmapButton23, 1, wxALL|wxEXPAND, 5);
    BitmapButton24 = new wxBitmapButton(this, ID_BITMAPBUTTON25, wxBitmap(wxImage(_T("Pictures\\Puste.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON25"));
    GridSizer1->Add(BitmapButton24, 1, wxALL|wxEXPAND, 5);
    FlexGridSizer1->Add(GridSizer1, 1, wxALL|wxEXPAND, 5);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    Button2 = new wxButton(this, ID_BUTTON2, _("Restart"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    BoxSizer2->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button1 = new wxButton(this, ID_BUTTON1, _("Start"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    wxFont Button1Font(10,wxFONTFAMILY_DEFAULT,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial"),wxFONTENCODING_DEFAULT);
    Button1->SetFont(Button1Font);
    BoxSizer2->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button4 = new wxButton(this, ID_BUTTON4, _("Jak Grać\?"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
    Button4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
    Button4->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENUTEXT));
    BoxSizer2->Add(Button4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Czas"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    FlexGridSizer1->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    Timer1.SetOwner(this, ID_TIMER1);
    FlexGridSizer1->Fit(this);
    FlexGridSizer1->SetSizeHints(this);

    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BingoDialog::OnButton3Click);
    Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BingoDialog::OnBitmapButton0Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BingoDialog::OnButton2Click2);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BingoDialog::OnButton1Click1);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BingoDialog::OnButton4Click1);
    Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&BingoDialog::OnTimer1Trigger);
    //*)


  #define pp(nr) plansza[nr] = BitmapButton ##nr;
   pp(0) pp(1) pp(2) pp(3) pp(4) pp(5) pp(6) pp(7) pp(8) pp(9) pp(10) pp(11) pp(12) pp(13) pp(14) pp(15) pp(16) pp(17) pp(18) pp(19) pp(20) pp(21) pp(22) pp(23) pp(24) pp(25) pp(26) pp(27) pp(28)
    #undef pp


    for (int i=0; i<25;i++)
    {
        przelicz[  plansza[i]->GetId() ]  = i;
        Connect(plansza[i]->GetId(),wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&BingoDialog::OnBitmapButton0Click);
    }

rysunki[0]=wxBitmap(wxImage(_T("Pictures\\Puste.bmp")));
 for(int i=1; i<75; i++)
    {
        rysunki[i] = wxBitmap(wxImage(_T("Pictures\\")+wxString::Format(wxT("%d"),i+1)+wxT(".bmp")));
    }

rysunki[75]=wxBitmap(wxImage(_T("Pictures\\Ok.bmp")));


SetIcon(wxICON(aaaa));
}

BingoDialog::~BingoDialog()
{
    //(*Destroy(BingoDialog)
    //*)
}

void BingoDialog::OnButton1Click1(wxCommandEvent& event)
{

    Timer1.Start();
    //zmienna losowa
    srand(time(NULL));
    //ustawianie bitmap bez powtarzania
    for (int kol = 0; kol < 5; kol++) {
            int tablica[5];//
            int i = 0;

                while (i < 5)
                {
                 {

                int losowaLiczba = rand() % 14 + 1;//liczba
                bool czyJest = false;
                for (int j = 0; j < i; j++)
                {
                    if (tablica[j] == losowaLiczba)
                    {
                        czyJest = true;
                        break;
                    }
                }
                if (!czyJest)
                {
                    tablica[i] = losowaLiczba;
                    odgadniete[i*5 + kol] = false;
                    plansza[i * 5 + kol]->SetBitmap(rysunki[losowaLiczba  + kol*15 ]);
                    i++;
                }}
                }
    }
}

void BingoDialog::OnButton2Click2(wxCommandEvent& event)
{
    Timer1.Stop();
    StaticText3->SetLabel("00:00:00");
   buttonClickCount=0;
   StaticText2->SetLabel(wxString::Format("0", buttonClickCount));
    for (int i=0; i<29; i++)
    {
    plansza[i]->SetBitmap(rysunki[0]);//Restart
    }
}

void BingoDialog::OnButton3Click(wxCommandEvent& event)
{
   int tablica2[4];
    int k = 0;
    while (k < 4)
    {
        int losowaLiczba2 = rand() % 74 + 1;
        bool czyJest2 = false;
        for (int j = 0; j < k; j++)
        {
            if (tablica2[j] == losowaLiczba2)
            {
                czyJest2 = true;
               break;
            }
        }
        if (!czyJest2)
        {
            tablica2[k] = losowaLiczba2;
          plansza[25+k]->SetBitmap(rysunki[losowaLiczba2]);
           k++;
        }
    }

//
  buttonClickCount++;
  StaticText2->SetLabel(wxString::Format("%d", buttonClickCount));
}

void BingoDialog::SprawdzWygrana()
{
    //Zmienne dla przechowywania ilosci wygranych poziomo, pionowo i ukos



    //Wyszukiwanie wygranych poziomo
    for (int i = 0; i < 5; i++)
    {
        int licznikPoziomo = 0;
        for (int j = 0; j < 5; j++)
        {
            if (odgadniete[j + i * 5])
            {
                licznikPoziomo++;
            }
        }
        //Sprawdzenie czy znaleziono wygran¹ poziomo
        if (licznikPoziomo == 5)
        {
             Timer1.Stop();
            wxMessageBox(_("Bingo!"));
            return;
        }
    }

    //Wyszukiwanie wygranych pionowo
    for (int i = 0; i < 5; i++)
    {

        int licznikPionowo = 0;
        for (int j = 0; j < 5; j++)
        {

            if (odgadniete[j * 5 + i])
            {

                licznikPionowo++;
            }
        }

        //Sprawdzenie czy znaleziono wygran¹ pionowo
        if (licznikPionowo == 5)
            {
                 Timer1.Stop();
            wxMessageBox(_("Bingo!"));
            return;
            }
    }
//Wyszukiwanie wygranych ukos
int licznikUkos = 0;
for (int i = 0; i < 5; i++)
{
    if (odgadniete[i * 5 + i])
    {
    licznikUkos++;
    }

}
//Sprawdzenie czy znaleziono wygraną ukos
if (licznikUkos == 5)
{
     Timer1.Stop();
    wxMessageBox(("Bingo!"));
    return;
}

//Wyszukiwanie wygranych ukos odwrotny
licznikUkos = 0;
for (int i = 0; i < 5; i++)
{
    if (odgadniete[4 - i + i * 5])
    {
        licznikUkos++;
    }
}

//Sprawdzenie czy znaleziono wygraną ukos odwrotny
if (licznikUkos == 5)
{
    wxMessageBox(("Bingo!"));
    return;
}

}

void BingoDialog::OnBitmapButton0Click(wxCommandEvent& event)
{
    int nr = przelicz[event.GetId()];


   //Porównanie bitmapButton od 25 do 28
    if (plansza[25]->GetBitmap().IsSameAs(plansza[nr]->GetBitmap()) ||
        plansza[26]->GetBitmap().IsSameAs(plansza[nr]->GetBitmap()) ||
        plansza[27]->GetBitmap().IsSameAs(plansza[nr]->GetBitmap()) ||
        plansza[28]->GetBitmap().IsSameAs(plansza[nr]->GetBitmap()))
    {
        //Ustawienie bitmapButtonow
        plansza[nr]->SetBitmap(wxBitmap(wxImage(_T("Pictures\\Ok.bmp"))));
        odgadniete[nr]=true;
        SprawdzWygrana();
    }
}

void BingoDialog::OnButton4Click1(wxCommandEvent& event)
{
     wxMessageBox(_("Na samym początku naciskamy przycisk 'Start'.Następnie naciskamy na pole Losuj by wylosować liczby. Gdy w okienku powyżej planszy 5x5 wylosuje się taka sama liczba jak w naszym kwadracie zaznaczamy te pole. Gra skończy się gdy zaznaczymy pieć liczb poziomo, pionowo lub na ukos. Przycisk 'Restart' kasuje wszystkie liczby z okienek"));
}

void BingoDialog::OnTimer1Trigger(wxTimerEvent& event)
{
       m_time++;
    int hours = m_time / 3600;
    int minutes = (m_time % 3600) / 60;
    int seconds = m_time % 60;

    wxString timeStr;
    timeStr.Printf("%02d:%02d:%02d", hours, minutes, seconds);

    StaticText3->SetLabel(timeStr);

}
