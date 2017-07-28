
Int_t Dice()
{
	return (Int_t)(gRandom->Integer(6) + 1);
}

Int_t ThreeDices()
{
	return (Dice()+Dice()+Dice());
}

void Three_Dices()
{
	TH1* hst = new TH1I("dice","Three Dices",20,0,20);
	
	for(int i = 0 ; i < 1e6 ; i ++)
		hst->Fill(ThreeDices());
	
	hst->Draw();
	
	return;
}