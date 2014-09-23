//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Vigi.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender) //רטפנףול
{
Edit2->Text=VigiCode(Edit1->Text,Edit4->Text);

    }
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)  //נאסרטפנמגûגאול
{
 Edit3->Text=VigiDeCode(Edit2->Text,Edit4->Text);

 }
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)   //קטסעטל
{
Edit1->Clear();
Edit2->Clear();
Edit3->Clear();

}
//---------------------------------------------------------------------------
