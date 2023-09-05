/***************************************************************
 * Name:      BingoApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Konrad Angelo ()
 * Created:   2023-01-06
 * Copyright: Konrad Angelo ()
 * License:
 **************************************************************/

#include "BingoApp.h"

//(*AppHeaders
#include "BingoMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(BingoApp);

bool BingoApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	BingoDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
