#include "3-sat.h"
// Grnerator speudoslucajnih brojeva
unsigned long init[4] = {0x123, 0x234, 0x345, 0x456}, length = 4;
MTRand_int32 irand(init, length);
MTRand drand(time(0));

//Konstruktor klase Jedinka

Jedinka::Jedinka()
{
  for(int i = 0; i < VEL_JEDINKE; ++i)
  {
    if((int)(irand()*drand()*10) % 10 < 5)
      this->bitVektor.push_back(false); 
    else
      this->bitVektor.push_back(true);
  }
  
  // treba izracunati sada funkciju dobrote
}


Jedinka::Jedinka(vector<bool> vb)
{
  // treba izracunati dobrotu
}

/* funkcija stvori_novu_populaciju()
/* parametri: Jedinka&, int
/* povratna vrijednost: void
/* opis: puni vektor populacija sa jedinkama na 2 nacina ovisno o statusu. Ako je status PRAZNA onda puni sve na slucajan nacin
/*       ako je status IZ_POSTOJECE onda vrsi selekciju prema funckiji dobrote i uzima odredjni postotak najboljih.
/* moguce dopune: prvenstveno funkcija u slucaju IZ_POSTOJECE vrati nepotpun vektor jedinki gdje treba dodati mutaciju i krizanje
/*                pa bi se moglo sloziti da se to automatski radi u ovoj funckciji što bi main ucinilo trivijalnim
/************************************************************************************/
void stvori_novu_populaciju(vector<Jedinka>& populacija,int status)
{
  if( status == PRAZNA )
    for(int i = 0; i < VEL_POP; ++i)
      populacija.push_back(Jedinka());
  else if( status == IZ_POSTOJECE )
  {
    // slekcija najboljih
    // krizanje
    // mutacija
  }
}


