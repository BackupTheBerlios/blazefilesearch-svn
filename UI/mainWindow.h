#pragma once

#include "UI_global.h"
#include "FeedbackForm.h"
#include "UI_engineInterface.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

// The following namespace imports are for SandBar/SandDock
using namespace TD::SandDock;
using namespace TD::SandDock::Rendering;

// For the engine
using namespace Blaze::Engine;


namespace UI
{
	/// <summary> 
	/// The main window of Blaze's GUI
	/// </summary>
public __gc class mainWindow : public System::Windows::Forms::Form
{
public: 
	mainWindow(void)
	{
		InitializeComponent();

		InitWindow();

	}

protected: 
	void Dispose(Boolean disposing)
	{
		if (disposing && components)
		{
			components->Dispose();
		}
		__super::Dispose(disposing);
	}

	// The GUI variables
private: TD::SandDock::SandDockManager *  sandDockManager;
private: TD::SandDock::DockContainer *  leftSandDock;
private: TD::SandDock::DockContainer *  rightSandDock;
private: TD::SandDock::DockContainer *  bottomSandDock;
private: TD::SandDock::DockContainer *  topSandDock;

private: TD::SandBar::SandBarManager *  sandBarManager;
private: TD::SandBar::ToolBarContainer *  leftSandBarDock;
private: TD::SandBar::ToolBarContainer *  rightSandBarDock;
private: TD::SandBar::ToolBarContainer *  bottomSandBarDock;
private: TD::SandBar::ToolBarContainer *  topSandBarDock;







private: TD::SandDock::DockControl *  sdcSearch;


private: TD::SandBar::MenuButtonItem *  mbiAbout;
private: TD::SandBar::MenuButtonItem *  mbiClose;
private: TD::SandBar::MenuButtonItem *  mbiExit;

private: TD::SandBar::ToolBar *  stbShortcuts;

private: TD::SandBar::MenuBarItem *  mbhSearches;
private: TD::SandBar::MenuBarItem *  mbhHelp;
private: TD::SandBar::MenuButtonItem *  mbiHelp;
private: TD::SandBar::MenuButtonItem *  mbiSendFeedback;

private: TD::SandBar::MenuBarItem *  mbhView;
private: TD::SandBar::MenuButtonItem *  mbiSearchPaneSelect;
private: TD::SandDock::DocumentContainer *  sctSearchesContainer;
private: TD::SandDock::DockControl *  sdcWelcome;
private: System::Windows::Forms::PictureBox *  picHomeBackground;
private: TD::SandDock::DockControl *  sdcOptions;
private: TD::SandBar::MenuButtonItem *  mbiOptionsPaneSelect;
private: TD::SandBar::ButtonItem *  sbiHelp;
private: TD::SandBar::ButtonItem *  sbiAbout;

private: TD::SandBar::MenuButtonItem *  mbiShowWelcomeTab;
private: System::Windows::Forms::Label *  lblWelcome;
private: TD::SandBar::MenuBar *  mbiMain;



private:
	/// <summary>
	/// Required designer variable.
	/// </summary>
	System::ComponentModel::Container* components;

	/// <summary>
	/// Required method for Designer support - do not modify
	/// the contents of this method with the code editor.
	/// </summary>
	void InitializeComponent(void)
	{
		System::Resources::ResourceManager *  resources = new System::Resources::ResourceManager(__typeof(UI::mainWindow));
		this->sandDockManager = new TD::SandDock::SandDockManager();
		this->leftSandDock = new TD::SandDock::DockContainer();
		this->sdcSearch = new TD::SandDock::DockControl();
		this->sdcOptions = new TD::SandDock::DockControl();
		this->rightSandDock = new TD::SandDock::DockContainer();
		this->bottomSandDock = new TD::SandDock::DockContainer();
		this->topSandDock = new TD::SandDock::DockContainer();
		this->sandBarManager = new TD::SandBar::SandBarManager();
		this->leftSandBarDock = new TD::SandBar::ToolBarContainer();
		this->rightSandBarDock = new TD::SandBar::ToolBarContainer();
		this->bottomSandBarDock = new TD::SandBar::ToolBarContainer();
		this->topSandBarDock = new TD::SandBar::ToolBarContainer();
		this->mbiMain = new TD::SandBar::MenuBar();
		this->mbhSearches = new TD::SandBar::MenuBarItem();
		this->mbiClose = new TD::SandBar::MenuButtonItem();
		this->mbiExit = new TD::SandBar::MenuButtonItem();
		this->mbhView = new TD::SandBar::MenuBarItem();
		this->mbiSearchPaneSelect = new TD::SandBar::MenuButtonItem();
		this->mbiOptionsPaneSelect = new TD::SandBar::MenuButtonItem();
		this->mbiShowWelcomeTab = new TD::SandBar::MenuButtonItem();
		this->mbhHelp = new TD::SandBar::MenuBarItem();
		this->mbiHelp = new TD::SandBar::MenuButtonItem();
		this->mbiSendFeedback = new TD::SandBar::MenuButtonItem();
		this->mbiAbout = new TD::SandBar::MenuButtonItem();
		this->stbShortcuts = new TD::SandBar::ToolBar();
		this->sbiHelp = new TD::SandBar::ButtonItem();
		this->sbiAbout = new TD::SandBar::ButtonItem();
		this->sctSearchesContainer = new TD::SandDock::DocumentContainer();
		this->sdcWelcome = new TD::SandDock::DockControl();
		this->lblWelcome = new System::Windows::Forms::Label();
		this->picHomeBackground = new System::Windows::Forms::PictureBox();
		this->leftSandDock->SuspendLayout();
		this->topSandBarDock->SuspendLayout();
		this->sctSearchesContainer->SuspendLayout();
		this->sdcWelcome->SuspendLayout();
		this->SuspendLayout();
		// 
		// sandDockManager
		// 
		this->sandDockManager->DockingManager = TD::SandDock::DockingManager::Whidbey;
		this->sandDockManager->OwnerForm = this;
		this->sandDockManager->Renderer = new TD::SandDock::Rendering::Office2003Renderer();
		// 
		// leftSandDock
		// 
		this->leftSandDock->Controls->Add(this->sdcSearch);
		this->leftSandDock->Controls->Add(this->sdcOptions);
		this->leftSandDock->Dock = System::Windows::Forms::DockStyle::Left;
		this->leftSandDock->Guid = System::Guid(S"8b2183b4-63c6-4437-b491-d923b42aa2ca");
		TD::SandDock::LayoutSystemBase* __mcTemp__1[] = new TD::SandDock::LayoutSystemBase*[1];
		TD::SandDock::DockControl* __mcTemp__2[] = new TD::SandDock::DockControl*[2];
		__mcTemp__2[0] = this->sdcSearch;
		__mcTemp__2[1] = this->sdcOptions;
		__mcTemp__1[0] = new TD::SandDock::ControlLayoutSystem(180, 411, __mcTemp__2, this->sdcSearch);
		this->leftSandDock->LayoutSystem = new TD::SandDock::SplitLayoutSystem(250, 400, System::Windows::Forms::Orientation::Horizontal, __mcTemp__1);
		this->leftSandDock->Location = System::Drawing::Point(0, 50);
		this->leftSandDock->Manager = this->sandDockManager;
		this->leftSandDock->Name = S"leftSandDock";
		this->leftSandDock->Size = System::Drawing::Size(184, 411);
		this->leftSandDock->TabIndex = 4;
		// 
		// sdcSearch
		// 
		this->sdcSearch->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
		this->sdcSearch->Guid = System::Guid(S"853affb6-c2cb-4ce8-8359-f304526c475d");
		this->sdcSearch->Location = System::Drawing::Point(0, 25);
		this->sdcSearch->Name = S"sdcSearch";
		this->sdcSearch->Size = System::Drawing::Size(180, 363);
		this->sdcSearch->TabImage = (__try_cast<System::Drawing::Image *  >(resources->GetObject(S"sdcSearch.TabImage")));
		this->sdcSearch->TabIndex = 0;
		this->sdcSearch->Text = S"Search";
		this->sdcSearch->Closed += new System::EventHandler(this, sdcSearch_Closed);
		// 
		// sdcOptions
		// 
		this->sdcOptions->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
		this->sdcOptions->Guid = System::Guid(S"344ca479-91c0-4621-b8aa-726913f16b0f");
		this->sdcOptions->Location = System::Drawing::Point(0, 25);
		this->sdcOptions->Name = S"sdcOptions";
		this->sdcOptions->Size = System::Drawing::Size(180, 363);
		this->sdcOptions->TabImage = (__try_cast<System::Drawing::Image *  >(resources->GetObject(S"sdcOptions.TabImage")));
		this->sdcOptions->TabIndex = 0;
		this->sdcOptions->Text = S"Options";
		this->sdcOptions->Closed += new System::EventHandler(this, sdcOptions_Closed);
		// 
		// rightSandDock
		// 
		this->rightSandDock->Dock = System::Windows::Forms::DockStyle::Right;
		this->rightSandDock->Guid = System::Guid(S"d118fb89-0d33-462b-9f47-1bed434bc309");
		this->rightSandDock->LayoutSystem = new TD::SandDock::SplitLayoutSystem(250, 400);
		this->rightSandDock->Location = System::Drawing::Point(712, 50);
		this->rightSandDock->Manager = this->sandDockManager;
		this->rightSandDock->Name = S"rightSandDock";
		this->rightSandDock->Size = System::Drawing::Size(0, 411);
		this->rightSandDock->TabIndex = 5;
		// 
		// bottomSandDock
		// 
		this->bottomSandDock->Dock = System::Windows::Forms::DockStyle::Bottom;
		this->bottomSandDock->Guid = System::Guid(S"41bd64c4-5b0f-41ea-8844-2f5597b61618");
		this->bottomSandDock->LayoutSystem = new TD::SandDock::SplitLayoutSystem(250, 400);
		this->bottomSandDock->Location = System::Drawing::Point(0, 461);
		this->bottomSandDock->Manager = this->sandDockManager;
		this->bottomSandDock->Name = S"bottomSandDock";
		this->bottomSandDock->Size = System::Drawing::Size(712, 0);
		this->bottomSandDock->TabIndex = 6;
		// 
		// topSandDock
		// 
		this->topSandDock->Dock = System::Windows::Forms::DockStyle::Top;
		this->topSandDock->DockingManager = TD::SandDock::DockingManager::Whidbey;
		this->topSandDock->Guid = System::Guid(S"48454df2-f926-467b-8a9a-500dadcb4601");
		this->topSandDock->LayoutSystem = new TD::SandDock::SplitLayoutSystem(250, 400);
		this->topSandDock->Location = System::Drawing::Point(0, 50);
		this->topSandDock->Manager = this->sandDockManager;
		this->topSandDock->Name = S"topSandDock";
		this->topSandDock->Size = System::Drawing::Size(712, 0);
		this->topSandDock->TabIndex = 7;
		// 
		// sandBarManager
		// 
		this->sandBarManager->OwnerForm = this;
		// 
		// leftSandBarDock
		// 
		this->leftSandBarDock->Dock = System::Windows::Forms::DockStyle::Left;
		this->leftSandBarDock->Guid = System::Guid(S"be85f063-ec9b-4138-a508-3716663caae9");
		this->leftSandBarDock->Location = System::Drawing::Point(0, 50);
		this->leftSandBarDock->Manager = this->sandBarManager;
		this->leftSandBarDock->Name = S"leftSandBarDock";
		this->leftSandBarDock->Size = System::Drawing::Size(0, 411);
		this->leftSandBarDock->TabIndex = 8;
		// 
		// rightSandBarDock
		// 
		this->rightSandBarDock->Dock = System::Windows::Forms::DockStyle::Right;
		this->rightSandBarDock->Guid = System::Guid(S"15f5fe3a-8379-482b-94be-dbb514e50729");
		this->rightSandBarDock->Location = System::Drawing::Point(712, 50);
		this->rightSandBarDock->Manager = this->sandBarManager;
		this->rightSandBarDock->Name = S"rightSandBarDock";
		this->rightSandBarDock->Size = System::Drawing::Size(0, 411);
		this->rightSandBarDock->TabIndex = 9;
		// 
		// bottomSandBarDock
		// 
		this->bottomSandBarDock->Dock = System::Windows::Forms::DockStyle::Bottom;
		this->bottomSandBarDock->Guid = System::Guid(S"03678732-c68f-4f6f-8840-4b0fe220f75c");
		this->bottomSandBarDock->Location = System::Drawing::Point(0, 461);
		this->bottomSandBarDock->Manager = this->sandBarManager;
		this->bottomSandBarDock->Name = S"bottomSandBarDock";
		this->bottomSandBarDock->Size = System::Drawing::Size(712, 0);
		this->bottomSandBarDock->TabIndex = 10;
		// 
		// topSandBarDock
		// 
		this->topSandBarDock->Controls->Add(this->mbiMain);
		this->topSandBarDock->Controls->Add(this->stbShortcuts);
		this->topSandBarDock->Dock = System::Windows::Forms::DockStyle::Top;
		this->topSandBarDock->Guid = System::Guid(S"fb86d486-d317-457f-b3cb-d612d3615a19");
		this->topSandBarDock->Location = System::Drawing::Point(0, 0);
		this->topSandBarDock->Manager = this->sandBarManager;
		this->topSandBarDock->Name = S"topSandBarDock";
		this->topSandBarDock->Size = System::Drawing::Size(712, 50);
		this->topSandBarDock->TabIndex = 11;
		// 
		// mbiMain
		// 
		this->mbiMain->Guid = System::Guid(S"e3b8fc63-2489-4dec-b885-f02302a33bad");
		TD::SandBar::ToolbarItemBase* __mcTemp__3[] = new TD::SandBar::ToolbarItemBase*[3];
		__mcTemp__3[0] = this->mbhSearches;
		__mcTemp__3[1] = this->mbhView;
		__mcTemp__3[2] = this->mbhHelp;
		this->mbiMain->Items->AddRange(__mcTemp__3);
		this->mbiMain->Location = System::Drawing::Point(2, 0);
		this->mbiMain->Name = S"mbiMain";
		this->mbiMain->OwnerForm = this;
		this->mbiMain->Size = System::Drawing::Size(710, 24);
		this->mbiMain->TabIndex = 0;
		this->mbiMain->Text = S"Main";
		// 
		// mbhSearches
		// 
		TD::SandBar::ToolbarItemBase* __mcTemp__4[] = new TD::SandBar::ToolbarItemBase*[2];
		__mcTemp__4[0] = this->mbiClose;
		__mcTemp__4[1] = this->mbiExit;
		this->mbhSearches->Items->AddRange(__mcTemp__4);
		this->mbhSearches->Text = S"&Searches";
		// 
		// mbiClose
		// 
		this->mbiClose->Shortcut = System::Windows::Forms::Shortcut::CtrlC;
		this->mbiClose->Text = S"&Close";
		this->mbiClose->Activate += new System::EventHandler(this, mbiClose_Activate);
		// 
		// mbiExit
		// 
		this->mbiExit->Image = (__try_cast<System::Drawing::Image *  >(resources->GetObject(S"mbiExit.Image")));
		this->mbiExit->Shortcut = System::Windows::Forms::Shortcut::AltF4;
		this->mbiExit->Text = S"E&xit";
		this->mbiExit->Activate += new System::EventHandler(this, mbiExit_Activate);
		// 
		// mbhView
		// 
		TD::SandBar::ToolbarItemBase* __mcTemp__5[] = new TD::SandBar::ToolbarItemBase*[3];
		__mcTemp__5[0] = this->mbiSearchPaneSelect;
		__mcTemp__5[1] = this->mbiOptionsPaneSelect;
		__mcTemp__5[2] = this->mbiShowWelcomeTab;
		this->mbhView->Items->AddRange(__mcTemp__5);
		this->mbhView->Text = S"View";
		// 
		// mbiSearchPaneSelect
		// 
		this->mbiSearchPaneSelect->Checked = true;
		this->mbiSearchPaneSelect->Image = (__try_cast<System::Drawing::Image *  >(resources->GetObject(S"mbiSearchPaneSelect.Image")));
		this->mbiSearchPaneSelect->Text = S"Search Pane";
		this->mbiSearchPaneSelect->Activate += new System::EventHandler(this, mbiSearchPaneSelect_Activate);
		// 
		// mbiOptionsPaneSelect
		// 
		this->mbiOptionsPaneSelect->Image = (__try_cast<System::Drawing::Image *  >(resources->GetObject(S"mbiOptionsPaneSelect.Image")));
		this->mbiOptionsPaneSelect->Text = S"Options";
		this->mbiOptionsPaneSelect->Activate += new System::EventHandler(this, mbiOptionsPaneSelect_Activate);
		// 
		// mbiShowWelcomeTab
		// 
		this->mbiShowWelcomeTab->BeginGroup = true;
		this->mbiShowWelcomeTab->Checked = true;
		this->mbiShowWelcomeTab->Text = S"Show Welcome Tab";
		this->mbiShowWelcomeTab->Activate += new System::EventHandler(this, mbiShowWelcomeTab_Activate);
		// 
		// mbhHelp
		// 
		TD::SandBar::ToolbarItemBase* __mcTemp__6[] = new TD::SandBar::ToolbarItemBase*[3];
		__mcTemp__6[0] = this->mbiHelp;
		__mcTemp__6[1] = this->mbiSendFeedback;
		__mcTemp__6[2] = this->mbiAbout;
		this->mbhHelp->Items->AddRange(__mcTemp__6);
		this->mbhHelp->Text = S"&Help";
		// 
		// mbiHelp
		// 
		this->mbiHelp->Image = (__try_cast<System::Drawing::Image *  >(resources->GetObject(S"mbiHelp.Image")));
		this->mbiHelp->Shortcut = System::Windows::Forms::Shortcut::F1;
		this->mbiHelp->Text = S"&Help";
		this->mbiHelp->Activate += new System::EventHandler(this, mbiHelp_Activate);
		// 
		// mbiSendFeedback
		// 
		this->mbiSendFeedback->BeginGroup = true;
		this->mbiSendFeedback->Image = (__try_cast<System::Drawing::Image *  >(resources->GetObject(S"mbiSendFeedback.Image")));
		this->mbiSendFeedback->Text = S"&Send Feedback";
		this->mbiSendFeedback->Activate += new System::EventHandler(this, mbiSendFeedback_Activate);
		// 
		// mbiAbout
		// 
		this->mbiAbout->BeginGroup = true;
		this->mbiAbout->Image = (__try_cast<System::Drawing::Image *  >(resources->GetObject(S"mbiAbout.Image")));
		this->mbiAbout->Text = S"&About";
		this->mbiAbout->Activate += new System::EventHandler(this, mbiAbout_Activate);
		// 
		// stbShortcuts
		// 
		this->stbShortcuts->DockLine = 1;
		this->stbShortcuts->Guid = System::Guid(S"726b8794-3a0e-44f5-b587-10c0a7ab248b");
		TD::SandBar::ToolbarItemBase* __mcTemp__7[] = new TD::SandBar::ToolbarItemBase*[2];
		__mcTemp__7[0] = this->sbiHelp;
		__mcTemp__7[1] = this->sbiAbout;
		this->stbShortcuts->Items->AddRange(__mcTemp__7);
		this->stbShortcuts->Location = System::Drawing::Point(2, 24);
		this->stbShortcuts->Name = S"stbShortcuts";
		this->stbShortcuts->Size = System::Drawing::Size(136, 26);
		this->stbShortcuts->TabIndex = 1;
		this->stbShortcuts->Text = S"Shortcuts";
		// 
		// sbiHelp
		// 
		this->sbiHelp->BuddyMenu = this->mbiHelp;
		this->sbiHelp->Image = (__try_cast<System::Drawing::Image *  >(resources->GetObject(S"sbiHelp.Image")));
		this->sbiHelp->Text = S"Help";
		this->sbiHelp->ToolTipText = S"Get help on how to use Blaze";
		// 
		// sbiAbout
		// 
		this->sbiAbout->BuddyMenu = this->mbiAbout;
		this->sbiAbout->Image = (__try_cast<System::Drawing::Image *  >(resources->GetObject(S"sbiAbout.Image")));
		this->sbiAbout->Text = S"About";
		this->sbiAbout->ToolTipText = S"About";
		// 
		// sctSearchesContainer
		// 
		this->sctSearchesContainer->BorderStyle = TD::SandDock::Rendering::BorderStyle::None;
		this->sctSearchesContainer->Controls->Add(this->sdcWelcome);
		this->sctSearchesContainer->Cursor = System::Windows::Forms::Cursors::Default;
		this->sctSearchesContainer->DockingManager = TD::SandDock::DockingManager::Whidbey;
		this->sctSearchesContainer->Guid = System::Guid(S"14b44871-d8b6-4875-a483-8d0377b74328");
		TD::SandDock::LayoutSystemBase* __mcTemp__8[] = new TD::SandDock::LayoutSystemBase*[1];
		TD::SandDock::DockControl* __mcTemp__9[] = new TD::SandDock::DockControl*[1];
		__mcTemp__9[0] = this->sdcWelcome;
		__mcTemp__8[0] = new TD::SandDock::DocumentLayoutSystem(528, 411, __mcTemp__9, this->sdcWelcome);
		this->sctSearchesContainer->LayoutSystem = new TD::SandDock::SplitLayoutSystem(250, 400, System::Windows::Forms::Orientation::Horizontal, __mcTemp__8);
		this->sctSearchesContainer->Location = System::Drawing::Point(184, 50);
		this->sctSearchesContainer->Manager = 0;
		this->sctSearchesContainer->Name = S"sctSearchesContainer";
		this->sctSearchesContainer->Renderer = new TD::SandDock::Rendering::Office2003Renderer();
		this->sctSearchesContainer->Size = System::Drawing::Size(528, 411);
		this->sctSearchesContainer->TabIndex = 12;
		// 
		// sdcWelcome
		// 
		this->sdcWelcome->Anchor = (System::Windows::Forms::AnchorStyles)(System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right);
		this->sdcWelcome->BackColor = System::Drawing::Color::FromArgb((System::Byte)254, (System::Byte)255, (System::Byte)242);
		this->sdcWelcome->Controls->Add(this->lblWelcome);
		this->sdcWelcome->Controls->Add(this->picHomeBackground);
		this->sdcWelcome->Guid = System::Guid(S"892daf64-e8bd-4f65-9739-6b40f7a146e2");
		this->sdcWelcome->Location = System::Drawing::Point(4, 32);
		this->sdcWelcome->Name = S"sdcWelcome";
		this->sdcWelcome->Size = System::Drawing::Size(520, 375);
		this->sdcWelcome->TabIndex = 0;
		this->sdcWelcome->Text = S"Welcome";
		this->sdcWelcome->Closed += new System::EventHandler(this, sdcWelcome_Closed);
		this->sdcWelcome->Closing += new System::ComponentModel::CancelEventHandler(this, sdcWelcome_Closing);
		// 
		// lblWelcome
		// 
		this->lblWelcome->Anchor = System::Windows::Forms::AnchorStyles::Top;
		this->lblWelcome->AutoSize = true;
		this->lblWelcome->BackColor = System::Drawing::Color::Transparent;
		this->lblWelcome->Font = new System::Drawing::Font(S"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, (System::Byte)0);
		this->lblWelcome->Location = System::Drawing::Point(172, 16);
		this->lblWelcome->Name = S"lblWelcome";
		this->lblWelcome->Size = System::Drawing::Size(177, 23);
		this->lblWelcome->TabIndex = 1;
		this->lblWelcome->Text = S"Welcome to Blaze!";
		// 
		// picHomeBackground
		// 
		this->picHomeBackground->Anchor = (System::Windows::Forms::AnchorStyles)(System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right);
		this->picHomeBackground->BackColor = System::Drawing::Color::Transparent;
		this->picHomeBackground->Image = (__try_cast<System::Drawing::Image *  >(resources->GetObject(S"picHomeBackground.Image")));
		this->picHomeBackground->Location = System::Drawing::Point(392, 240);
		this->picHomeBackground->Name = S"picHomeBackground";
		this->picHomeBackground->Size = System::Drawing::Size(128, 136);
		this->picHomeBackground->TabIndex = 0;
		this->picHomeBackground->TabStop = false;
		// 
		// mainWindow
		// 
		this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
		this->ClientSize = System::Drawing::Size(712, 461);
		this->Controls->Add(this->sctSearchesContainer);
		this->Controls->Add(this->leftSandDock);
		this->Controls->Add(this->rightSandDock);
		this->Controls->Add(this->bottomSandDock);
		this->Controls->Add(this->topSandDock);
		this->Controls->Add(this->leftSandBarDock);
		this->Controls->Add(this->rightSandBarDock);
		this->Controls->Add(this->bottomSandBarDock);
		this->Controls->Add(this->topSandBarDock);
		this->Name = S"mainWindow";
		this->Text = S"Blaze";
		this->leftSandDock->ResumeLayout(false);
		this->topSandBarDock->ResumeLayout(false);
		this->sctSearchesContainer->ResumeLayout(false);
		this->sdcWelcome->ResumeLayout(false);
		this->ResumeLayout(false);

	}


	// Init code
	void InitWindow()
	{
		this->sdcOptions->Close();
		this->sdcWelcome->Activate();
	}
private: System::Void mbiExit_Activate(System::Object *  sender, System::EventArgs *  e)
		 {
			 Application::Exit();
		 }

private: System::Void mbiClose_Activate(System::Object *  sender, System::EventArgs *  e)
		 {
			 // TODO: fix window close code later when needed
			 mbiExit_Activate(sender, e);
		 }

private: System::Void mbiAbout_Activate(System::Object *  sender, System::EventArgs *  e)
		 {
			 // TODO: beef up about box
			 MessageBox::Show(this,
				 S"Blaze 0.01a\nby the International Association of Idiots",
				 S"About",
				 MessageBoxButtons::OK,
				 MessageBoxIcon::Information);
		 }

private: System::Void mbiSendFeedback_Activate(System::Object *  sender, System::EventArgs *  e)
		 {
			 FeedbackForm *ff = new FeedbackForm();
			 ff->Show();
		 }

		 /*
		 * rendererID is to signify the renderer:
		 *   - Automatic
		 *   - Standard
		 *   - LunaBlue
		 *   - LunaOlive
		 *   - LunaSilver
		 */
		 /*
		 private: System::Boolean changeRendererColorScheme(System::String *cs)
		 {
		 if (!cs->Equals(S"Automatic") &&
		 !cs->Equals(S"Standard") &&
		 !cs->Equals(S"LunaBlue") &&
		 !cs->Equals(S"LunaOlive") &&
		 !cs->Equals(S"LunaSilver"))
		 {
		 return false;
		 }
		 Office2003Renderer *oR_buf = new Office2003Renderer();
		 if (this->sctSearchesContainer->Renderer->Equals(oR_buf))
		 {
		 Office2003Renderer Office2003Renderer::Office2003ColorScheme *colorScheme = 
		 (Office2003Renderer::Office2003ColorScheme)
		 Enum::Parse(__typeof(Office2003Renderer::Office2003ColorScheme), cs);

		 Office2003Renderer *renderer = (Office2003Renderer)sctSearchesContainer->Renderer;
		 if (renderer->ColorScheme != colorScheme)
		 {
		 renderer->ColorScheme = colorScheme;
		 sctSearchesContainer->Invalidate();
		 }
		 }

		 return true;
		 }*/

private: System::Void mbiSearchPaneSelect_Activate(System::Object *  sender, System::EventArgs *  e)
		 {
			 if (this->mbiSearchPaneSelect->Checked)
			 {
				 mbiSearchPaneSelect->Checked = false;
				 sdcSearch->Close();
			 }
			 else
			 {
				 mbiSearchPaneSelect->Checked = true;
				 sdcSearch->Open();
			 }
		 }

private: System::Void mbiOptionsPaneSelect_Activate(System::Object *  sender, System::EventArgs *  e)
		 {
			 if (this->mbiOptionsPaneSelect->Checked)
			 {
				 mbiOptionsPaneSelect->Checked = false;
				 sdcOptions->Close();
			 }
			 else
			 {
				 mbiOptionsPaneSelect->Checked = true;
				 sdcOptions->Open();
			 }
		 }
private: System::Void mbiHelp_Activate(System::Object *  sender, System::EventArgs *  e)
		 {
			 // TODO: implement help
			 MessageBox::Show("not implemented yet :-(");
		 }

private: System::Void mbiShowWelcomeTab_Activate(System::Object *  sender, System::EventArgs *  e)
		 {
			 if (this->sctSearchesContainer->Documents->Contains(this->sdcWelcome))
			 {
				 this->sctSearchesContainer->RemoveDocument(this->sdcWelcome);  // Close the tab
				 this->mbiShowWelcomeTab->Checked = false;
			 }
			 else
			 {				 
				 this->sctSearchesContainer->AddDocument(this->sdcWelcome);
				 this->mbiShowWelcomeTab->Checked = true;
			 }
		 }

private: System::Void sdcWelcome_Closed(System::Object *  sender, System::EventArgs *  e)
		 {
			 this->mbiShowWelcomeTab->Checked = false;
		 }

private: System::Void sdcSearch_Closed(System::Object *  sender, System::EventArgs *  e)
		 {
			 this->mbiSearchPaneSelect->Checked = false;
		 }

private: System::Void sdcOptions_Closed(System::Object *  sender, System::EventArgs *  e)
		 {
			 this->mbiOptionsPaneSelect->Checked = false;
		 }

private: System::Void sdcWelcome_Closing(System::Object *  sender, System::ComponentModel::CancelEventArgs *  e)
		 {
		 }

};
}