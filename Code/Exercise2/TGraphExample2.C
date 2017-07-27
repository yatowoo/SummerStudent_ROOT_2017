void TGraphExample2() 
{
  TGraphErrors* graph = new TGraphErrors("ExampleInput.txt", "%lg %lg %lg %lg");

  graph->SetTitle("Fake Measurement;distance [cm];count rate [1/s]");
  graph->SetMarkerStyle(kOpenCircle);
  graph->SetMarkerColor(kBlue);
  graph->SetLineColor(kBlue);

  TCanvas* mycanvas = new TCanvas();
  graph->Draw("APE");
  mycanvas->Update();
}