void CalcVolume() 
{
  Double_t radius[5] = {5, 3.5, 25., 10., 9.76543};
  Double_t height[5] = {10., 8., 3., 9., 6.54378};

  for (Int_t i=0; i<5;++i) {
    Double_t area = TMath::Pi() * radius[i] * radius[i];
    Double_t volume = area * height[i];
    Double_t surface = (2 * area) + (2 * TMath::Pi() * radius[i] * height[i]);
    cout << "A can with a radius of " << radius[i] << " cm and a height of " 
         << height[i] << " cm has" << endl;
    cout << "Volume: "<< volume << endl; 
    cout << "Surface: "<< surface << endl; 
    cout << "------------------------------" << endl;
  }
}