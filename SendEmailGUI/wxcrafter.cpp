//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "wxcrafter.h"


// Declare the bitmap loading function
extern void wxC9ED9InitBitmapResources();

static bool bBitmapLoaded = false;


MainFrameBaseClass::MainFrameBaseClass(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxFrame(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9ED9InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer1 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer1);
    
    m_mainPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    
    boxSizer1->Add(m_mainPanel, 1, wxEXPAND, 5);
    
    wxBoxSizer* boxSizer24 = new wxBoxSizer(wxVERTICAL);
    m_mainPanel->SetSizer(boxSizer24);
    
    wxStaticBoxSizer* staticBoxSizer26 = new wxStaticBoxSizer( new wxStaticBox(m_mainPanel, wxID_ANY, _("Gmail Account:")), wxVERTICAL);
    
    boxSizer24->Add(staticBoxSizer26, 0, wxALL|wxEXPAND, 10);
    
    wxFlexGridSizer* flexGridSizer32 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer32->SetFlexibleDirection( wxBOTH );
    flexGridSizer32->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer32->AddGrowableCol(1);
    
    staticBoxSizer26->Add(flexGridSizer32, 1, wxALL|wxEXPAND, 5);
    
    m_staticText34 = new wxStaticText(m_mainPanel, wxID_ANY, _("Email:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer32->Add(m_staticText34, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textCtrlGmail = new wxTextCtrl(m_mainPanel, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    m_textCtrlGmail->SetToolTip(_("Gmail account for sending the email"));
    m_textCtrlGmail->SetFocus();
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlGmail->SetHint(_("Gmail account for sending the email"));
    #endif
    
    flexGridSizer32->Add(m_textCtrlGmail, 0, wxALL|wxEXPAND, 5);
    
    m_staticText36 = new wxStaticText(m_mainPanel, wxID_ANY, _("Password:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer32->Add(m_staticText36, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textCtrlPassword = new wxTextCtrl(m_mainPanel, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_PASSWORD);
    m_textCtrlPassword->SetToolTip(_("Gmail account password"));
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlPassword->SetHint(wxT(""));
    #endif
    
    flexGridSizer32->Add(m_textCtrlPassword, 0, wxALL|wxEXPAND, 5);
    
    m_staticText38 = new wxStaticText(m_mainPanel, wxID_ANY, _("SMTP:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer32->Add(m_staticText38, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textCtrlSmtp = new wxTextCtrl(m_mainPanel, wxID_ANY, wxT("smtps://smtp.gmail.com:465"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_textCtrlSmtp->SetToolTip(_("Gmail smtp URL"));
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlSmtp->SetHint(wxT(""));
    #endif
    
    flexGridSizer32->Add(m_textCtrlSmtp, 0, wxALL|wxEXPAND, 5);
    
    wxStaticBoxSizer* staticBoxSizer23 = new wxStaticBoxSizer( new wxStaticBox(m_mainPanel, wxID_ANY, _("Message:")), wxVERTICAL);
    
    boxSizer24->Add(staticBoxSizer23, 1, wxALL|wxEXPAND, 10);
    
    wxFlexGridSizer* flexGridSizer41 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer41->SetFlexibleDirection( wxBOTH );
    flexGridSizer41->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer41->AddGrowableCol(1);
    flexGridSizer41->AddGrowableRow(3);
    
    staticBoxSizer23->Add(flexGridSizer41, 1, wxALL|wxEXPAND, 5);
    
    m_staticText49 = new wxStaticText(m_mainPanel, wxID_ANY, _("From:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer41->Add(m_staticText49, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textCtrlFrom = new wxTextCtrl(m_mainPanel, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlFrom->SetHint(_("From..."));
    #endif
    
    flexGridSizer41->Add(m_textCtrlFrom, 0, wxALL|wxEXPAND, 5);
    
    m_staticText43 = new wxStaticText(m_mainPanel, wxID_ANY, _("To:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer41->Add(m_staticText43, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textCtrlTo = new wxTextCtrl(m_mainPanel, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlTo->SetHint(_("To..."));
    #endif
    
    flexGridSizer41->Add(m_textCtrlTo, 0, wxALL|wxEXPAND, 5);
    
    m_staticText45 = new wxStaticText(m_mainPanel, wxID_ANY, _("Subject:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer41->Add(m_staticText45, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textCtrlSubject = new wxTextCtrl(m_mainPanel, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlSubject->SetHint(_("Subject.."));
    #endif
    
    flexGridSizer41->Add(m_textCtrlSubject, 0, wxALL|wxEXPAND, 5);
    
    m_staticText47 = new wxStaticText(m_mainPanel, wxID_ANY, _("Body:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer41->Add(m_staticText47, 0, wxALL|wxALIGN_RIGHT|wxALIGN_TOP, 5);
    
    m_textCtrlBody = new wxTextCtrl(m_mainPanel, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_RICH2|wxTE_PROCESS_TAB|wxTE_PROCESS_ENTER|wxTE_MULTILINE);
    
    flexGridSizer41->Add(m_textCtrlBody, 1, wxALL|wxEXPAND, 5);
    
    m_button19 = new wxButton(m_mainPanel, wxID_ANY, _("SEND"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_button19->SetDefault();
    
    staticBoxSizer23->Add(m_button19, 0, wxALL|wxALIGN_RIGHT, 5);
    
    m_menuBar = new wxMenuBar(0);
    this->SetMenuBar(m_menuBar);
    
    m_name6 = new wxMenu();
    m_menuBar->Append(m_name6, _("File"));
    
    m_menuItem7 = new wxMenuItem(m_name6, wxID_EXIT, _("Exit\tAlt-X"), _("Quit"), wxITEM_NORMAL);
    m_name6->Append(m_menuItem7);
    
    m_name8 = new wxMenu();
    m_menuBar->Append(m_name8, _("Help"));
    
    m_menuItem9 = new wxMenuItem(m_name8, wxID_ABOUT, _("About..."), wxT(""), wxITEM_NORMAL);
    m_name8->Append(m_menuItem9);
    
    SetName(wxT("MainFrameBaseClass"));
    SetMinClientSize(wxSize(500,-1));
    SetSize(-1,-1);
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    m_button19->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnSend), NULL, this);
    this->Connect(m_menuItem7->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnExit), NULL, this);
    this->Connect(m_menuItem9->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnAbout), NULL, this);
    
}

MainFrameBaseClass::~MainFrameBaseClass()
{
    m_button19->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnSend), NULL, this);
    this->Disconnect(m_menuItem7->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnExit), NULL, this);
    this->Disconnect(m_menuItem9->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnAbout), NULL, this);
    
}
