void TGraphExample1() 
{
  std::vector<double> x_vals {1,2,3,4,5,6,7,8,9,10};
  std::vector<double> y_vals {53,44,45,35,24,22,20,14,12,6};
  std::vector<double> y_errs {5.4,4.8,4.1,2.9,5.1,4.2,4.5,4.7,5.,5.};
  int nr_values = x_vals.size();

  TGraphErrors* graph = new TGraphErrors(nr_values, x_vals.data(), y_vals.data(), 
                                         nullptr, y_errs.data());

  graph->SetTitle("Fake Measurement;distance [cm];count rate [1/s]");
  graph->SetMarkerStyle(kOpenCircle);
  graph->SetMarkerColor(kBlue);
  graph->SetLineColor(kBlue);

  TCanvas* mycanvas = new TCanvas();
  graph->Draw("APE");
  mycanvas->Update();
}