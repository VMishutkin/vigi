#include "Vigi.h"


AnsiString VigiCode(AnsiString tocode,AnsiString key)
{

AnsiString abc ("àáâãäå¸æçèéêëìíîïğñòóôõö÷øùúûüışÿÀÁÂÃÄÅ¨ÆÇÈÉÊË\
ÌÍÎÏĞÑÒÓÔÕÖ×ØÙÚÛÜİŞßabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
//key = key.Length();
    int len = tocode.Length();
    int a= abc.Length();
    int k=key.Length();
    for (int i=k; i<len; i++){
        int t=i%k;
        key+=key[t+1];
    }
    AnsiString crypted="";
    for (int i=1; i<=len; i++){
    int ind1=0,ind2=0;
         //ind1=abc.find(tocode[i]);
        //ind2=abc.find(key[i]);
        ind1=abc.Pos(tocode[i]);
        ind2=abc.Pos(key[i]);
        crypted.Insert(abc[(ind1+ind2)%a],i);
        //crypted.Insert(i,1,abc.at((ind1+ind2)%33));
    }
   return crypted;
}

AnsiString VigiDeCode(AnsiString todecode,AnsiString key)
{

AnsiString abc ("àáâãäå¸æçèéêëìíîïğñòóôõö÷øùúûüışÿÀÁÂÃÄÅ¨ÆÇÈÉÊË\
ÌÍÎÏĞÑÒÓÔÕÖ×ØÙÚÛÜİŞßabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
//key = key.Length();
    int len = todecode.Length();
    int a= abc.Length();
    int k=key.Length();
    for (int i=k; i<len; i++){
        int t=i%k;
        key+=key[t+1];
    }
    AnsiString crypted="";
    for (int i=1; i<=len; i++){
    int ind1=0,ind2=0;
         //ind1=abc.find(tocode[i]);
        //ind2=abc.find(key[i]);
        ind1=abc.Pos(todecode[i]);
        ind2=abc.Pos(key[i]);
        int index=(ind1-ind2+a)%a;
        if(index == 0)
        index=a;
        crypted.Insert(abc[index],i);
        }
        //crypted.Insert(i,1,abc.at((ind1+ind2)%33));
        return crypted;

}