#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace UI
{
	/// <summary> 
	/// Summary for FeedbackForm
	///
	/// WARNING: If you change the name of this class, you will need to change the 
	///          'Resource File Name' property for the managed resource compiler tool 
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
public __gc class FeedbackForm : public System::Windows::Forms::Form
{
public: 
	FeedbackForm(void)
	{
		InitializeComponent();
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
private: System::Windows::Forms::Label *  lblReasons;

private: System::Windows::Forms::TextBox *  txtName;


private: System::Windows::Forms::Label *  lblName;
private: System::Windows::Forms::TextBox *  txtSubject;
private: System::Windows::Forms::Label *  lblSubject;
private: System::Windows::Forms::Label *  lblMessage;
private: System::Windows::Forms::TextBox *  txtMessage;

private: System::Windows::Forms::Button *  cmdSubmit;
private: System::Windows::Forms::Button *  cmdCancel;

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
		this->lblReasons = new System::Windows::Forms::Label();
		this->lblName = new System::Windows::Forms::Label();
		this->txtName = new System::Windows::Forms::TextBox();
		this->txtSubject = new System::Windows::Forms::TextBox();
		this->lblSubject = new System::Windows::Forms::Label();
		this->lblMessage = new System::Windows::Forms::Label();
		this->txtMessage = new System::Windows::Forms::TextBox();
		this->cmdCancel = new System::Windows::Forms::Button();
		this->cmdSubmit = new System::Windows::Forms::Button();
		this->SuspendLayout();
		// 
		// lblReasons
		// 
		this->lblReasons->BackColor = System::Drawing::SystemColors::Control;
		this->lblReasons->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->lblReasons->Location = System::Drawing::Point(8, 8);
		this->lblReasons->Name = S"lblReasons";
		this->lblReasons->Size = System::Drawing::Size(272, 56);
		this->lblReasons->TabIndex = 0;
		this->lblReasons->Text = S"Why don\'t you send us feedback about what you think about Blaze\?\nAny suggestions\?" 
			S" Bug reports\? Fill out this form to tell us about what you think!";
		// 
		// lblName
		// 
		this->lblName->AutoSize = true;
		this->lblName->BackColor = System::Drawing::SystemColors::Control;
		this->lblName->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->lblName->Location = System::Drawing::Point(8, 72);
		this->lblName->Name = S"lblName";
		this->lblName->Size = System::Drawing::Size(88, 16);
		this->lblName->TabIndex = 1;
		this->lblName->Text = S"Name (optional):";
		// 
		// txtName
		// 
		this->txtName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->txtName->Location = System::Drawing::Point(96, 72);
		this->txtName->MaxLength = 20;
		this->txtName->Name = S"txtName";
		this->txtName->Size = System::Drawing::Size(168, 20);
		this->txtName->TabIndex = 2;
		this->txtName->Text = S"";
		// 
		// txtSubject
		// 
		this->txtSubject->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->txtSubject->Location = System::Drawing::Point(96, 104);
		this->txtSubject->MaxLength = 20;
		this->txtSubject->Name = S"txtSubject";
		this->txtSubject->Size = System::Drawing::Size(168, 20);
		this->txtSubject->TabIndex = 5;
		this->txtSubject->Text = S"";
		// 
		// lblSubject
		// 
		this->lblSubject->AutoSize = true;
		this->lblSubject->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->lblSubject->Location = System::Drawing::Point(48, 104);
		this->lblSubject->Name = S"lblSubject";
		this->lblSubject->Size = System::Drawing::Size(45, 16);
		this->lblSubject->TabIndex = 6;
		this->lblSubject->Text = S"Subject:";
		// 
		// lblMessage
		// 
		this->lblMessage->AutoSize = true;
		this->lblMessage->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->lblMessage->Location = System::Drawing::Point(40, 136);
		this->lblMessage->Name = S"lblMessage";
		this->lblMessage->Size = System::Drawing::Size(53, 16);
		this->lblMessage->TabIndex = 7;
		this->lblMessage->Text = S"Message:";
		// 
		// txtMessage
		// 
		this->txtMessage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		this->txtMessage->Location = System::Drawing::Point(96, 136);
		this->txtMessage->MaxLength = 20;
		this->txtMessage->Multiline = true;
		this->txtMessage->Name = S"txtMessage";
		this->txtMessage->Size = System::Drawing::Size(168, 152);
		this->txtMessage->TabIndex = 8;
		this->txtMessage->Text = S"";
		// 
		// cmdCancel
		// 
		this->cmdCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
		this->cmdCancel->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->cmdCancel->Location = System::Drawing::Point(16, 296);
		this->cmdCancel->Name = S"cmdCancel";
		this->cmdCancel->Size = System::Drawing::Size(96, 23);
		this->cmdCancel->TabIndex = 9;
		this->cmdCancel->Text = S"Cancel";
		this->cmdCancel->Click += new System::EventHandler(this, cmdCancel_Click);
		// 
		// cmdSubmit
		// 
		this->cmdSubmit->FlatStyle = System::Windows::Forms::FlatStyle::System;
		this->cmdSubmit->Location = System::Drawing::Point(160, 296);
		this->cmdSubmit->Name = S"cmdSubmit";
		this->cmdSubmit->Size = System::Drawing::Size(96, 23);
		this->cmdSubmit->TabIndex = 10;
		this->cmdSubmit->Text = S"Submit";
		this->cmdSubmit->Click += new System::EventHandler(this, cmdSubmit_Click);
		// 
		// FeedbackForm
		// 
		this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
		this->BackColor = System::Drawing::SystemColors::Control;
		this->CancelButton = this->cmdCancel;
		this->ClientSize = System::Drawing::Size(277, 327);
		this->Controls->Add(this->cmdSubmit);
		this->Controls->Add(this->cmdCancel);
		this->Controls->Add(this->txtMessage);
		this->Controls->Add(this->lblMessage);
		this->Controls->Add(this->lblSubject);
		this->Controls->Add(this->txtSubject);
		this->Controls->Add(this->txtName);
		this->Controls->Add(this->lblName);
		this->Controls->Add(this->lblReasons);
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
		this->MaximizeBox = false;
		this->MaximumSize = System::Drawing::Size(283, 359);
		this->MinimizeBox = false;
		this->MinimumSize = System::Drawing::Size(283, 359);
		this->Name = S"FeedbackForm";
		this->ShowInTaskbar = false;
		this->Text = S"Send Feedback";
		this->ResumeLayout(false);

	}		
private: System::Void cmdClear_Click(System::Object *  sender, System::EventArgs *  e)
		 {
			 this->txtName->Text = String::Empty;
			 this->txtSubject->Text = String::Empty;
			 this->txtMessage->Text = String::Empty;
		 }

private: System::Void cmdSubmit_Click(System::Object *  sender, System::EventArgs *  e)
		 {
			 //MessageBox::Show("Don't do this yet!"); return System::Void;

			 // TODO: get some guy for the messages

			 // Compose the message
			 String *s = String::Concat(String::Concat(S"Name: ", this->txtName->Text,
				 S"\nSubject: ", this->txtSubject->Text), S"\nMessage: ", this->txtMessage->Text);

			 // Copy message to clipboard
			 Clipboard::SetDataObject(s);

			 // Tell them to email it to whoever
			 MessageBox::Show(this, S"Your message has been copied to the clipboard. Please email it to us at asdf@asdf.sdf. Thanks!",
				 "Blaze Feedback", MessageBoxButtons::OK, MessageBoxIcon::Information);

			 // Close the feedback form
			 this->Close();
		 }
private: System::Void cmdCancel_Click(System::Object *  sender, System::EventArgs *  e)
		 {
			 this->Close();
		 }

};
}
