void ThrowTheDices() {

  TH1S* dices = new TH1S("dices","Throw with 3 dices;Pips;Count rate", 20,0.5,20.5);

  TRandom* die = new TRandom();
  die->SetSeed(0);

  Float_t* value = new Float_t[3];

  for (Int_t i=0; i<10000;++i) {
    die->RndmArray(3,value);
    Int_t sum = static_cast<Int_t>((value[0]*6) + 1) +
                static_cast<Int_t>((value[1]*6) + 1) +
                static_cast<Int_t>((value[2]*6) + 1);
    dices->Fill(sum);
  }

  dices->Draw();

}