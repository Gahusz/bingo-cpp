/***************************************************************
 * Name:      BingoMain.h
 * Purpose:   Defines Application Frame
 * Author:    Konrad Angelo ()
 * Created:   2023-01-06
 * Copyright: Konrad Angelo ()
 * License:
 **************************************************************/
#include <iostream>
#ifndef BINGOMAIN_H
#define BINGOMAIN_H
#include <map>
#undef _

//(*Headers(BingoDialog)
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
#include <wx/timer.h>
//*)

class BingoDialog: public wxDialog
{
    public:

        BingoDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~BingoDialog();
        void SprawdzWygrana();
    private:

        //(*Handlers(BingoDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnBitmapButton0lick(wxCommandEvent& event);
        void OnButton1Click1(wxCommandEvent& event);
        void OnBitmapButton25Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton2Click1(wxCommandEvent& event);
        void OnButton2Click2(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        void OnBitmapButton0Click(wxCommandEvent& event);
        void OnBitmapButton3Click(wxCommandEvent& event);
        void OnButton4Click(wxCommandEvent& event);
        void OnButton4Click1(wxCommandEvent& event);
        void OnTimer1Trigger(wxTimerEvent& event);
        //*)

        //(*Identifiers(BingoDialog)
        static const long ID_STATICBITMAP1;
        static const long ID_BITMAPBUTTON26;
        static const long ID_BITMAPBUTTON27;
        static const long ID_BITMAPBUTTON28;
        static const long ID_BITMAPBUTTON29;
        static const long ID_BUTTON3;
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_BITMAPBUTTON1;
        static const long ID_BITMAPBUTTON2;
        static const long ID_BITMAPBUTTON3;
        static const long ID_BITMAPBUTTON4;
        static const long ID_BITMAPBUTTON5;
        static const long ID_BITMAPBUTTON6;
        static const long ID_BITMAPBUTTON7;
        static const long ID_BITMAPBUTTON8;
        static const long ID_BITMAPBUTTON9;
        static const long ID_BITMAPBUTTON10;
        static const long ID_BITMAPBUTTON11;
        static const long ID_BITMAPBUTTON12;
        static const long ID_BITMAPBUTTON13;
        static const long ID_BITMAPBUTTON14;
        static const long ID_BITMAPBUTTON15;
        static const long ID_BITMAPBUTTON16;
        static const long ID_BITMAPBUTTON17;
        static const long ID_BITMAPBUTTON18;
        static const long ID_BITMAPBUTTON19;
        static const long ID_BITMAPBUTTON20;
        static const long ID_BITMAPBUTTON21;
        static const long ID_BITMAPBUTTON22;
        static const long ID_BITMAPBUTTON23;
        static const long ID_BITMAPBUTTON24;
        static const long ID_BITMAPBUTTON25;
        static const long ID_BUTTON2;
        static const long ID_BUTTON1;
        static const long ID_BUTTON4;
        static const long ID_STATICTEXT3;
        static const long ID_TIMER1;
        //*)

        //(*Declarations(BingoDialog)
        wxBitmapButton* BitmapButton0;
        wxBitmapButton* BitmapButton10;
        wxBitmapButton* BitmapButton11;
        wxBitmapButton* BitmapButton12;
        wxBitmapButton* BitmapButton13;
        wxBitmapButton* BitmapButton14;
        wxBitmapButton* BitmapButton15;
        wxBitmapButton* BitmapButton16;
        wxBitmapButton* BitmapButton17;
        wxBitmapButton* BitmapButton18;
        wxBitmapButton* BitmapButton19;
        wxBitmapButton* BitmapButton1;
        wxBitmapButton* BitmapButton20;
        wxBitmapButton* BitmapButton21;
        wxBitmapButton* BitmapButton22;
        wxBitmapButton* BitmapButton23;
        wxBitmapButton* BitmapButton24;
        wxBitmapButton* BitmapButton25;
        wxBitmapButton* BitmapButton26;
        wxBitmapButton* BitmapButton27;
        wxBitmapButton* BitmapButton28;
        wxBitmapButton* BitmapButton2;
        wxBitmapButton* BitmapButton3;
        wxBitmapButton* BitmapButton4;
        wxBitmapButton* BitmapButton5;
        wxBitmapButton* BitmapButton6;
        wxBitmapButton* BitmapButton7;
        wxBitmapButton* BitmapButton8;
        wxBitmapButton* BitmapButton9;
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxButton* Button4;
        wxStaticBitmap* StaticBitmap1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxTimer Timer1;
        //*)

        wxBitmapButton * plansza[29];
        std::map<int, int> przelicz;
        wxBitmap rysunki[76];
        bool odgadniete[25];
        int buttonClickCount;
        int m_time=0;
        DECLARE_EVENT_TABLE()
};

#endif // BINGOMAIN_H
