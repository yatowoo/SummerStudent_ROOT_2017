void Graph()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 28 10:03:39 2017) by ROOT version6.08/02
   TCanvas *c1 = new TCanvas("c1", "c1",18,41,700,502);
   gStyle->SetOptFit(1);
   c1->Range(-1.25,-8.017501,12.25,72.1575);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[10] = {
   0.9935529,
   1.999284,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10};
   Double_t Graph0_fy1001[10] = {
   53.04405,
   44.07934,
   45,
   35,
   24,
   22,
   20,
   14,
   12,
   6};
   Double_t Graph0_fex1001[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[10] = {
   5.4,
   4.8,
   4.1,
   2.9,
   5.1,
   4.2,
   4.5,
   4.7,
   5,
   5};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Fake Measurement");
   gre->SetFillColor(4);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(4);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Fake Measurement",100,0.1,10.9);
   Graph_Graph1001->SetMinimum(0);
   Graph_Graph1001->SetMaximum(64.14);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("Distance [cm]");
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("Count Rate [1/s]");
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   
   TF1 *PrevFitTMP1002 = new TF1("PrevFitTMP","pol1",0.1,10.9);
   PrevFitTMP1002->SetFillColor(19);
   PrevFitTMP1002->SetFillStyle(0);
   PrevFitTMP1002->SetLineColor(2);
   PrevFitTMP1002->SetLineWidth(2);
   PrevFitTMP1002->SetChisquare(3.850558);
   PrevFitTMP1002->SetNDF(8);
   PrevFitTMP1002->GetXaxis()->SetLabelFont(42);
   PrevFitTMP1002->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP1002->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP1002->GetXaxis()->SetTitleFont(42);
   PrevFitTMP1002->GetYaxis()->SetLabelFont(42);
   PrevFitTMP1002->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP1002->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP1002->GetYaxis()->SetTitleFont(42);
   PrevFitTMP1002->SetParameter(0,56.05375);
   PrevFitTMP1002->SetParError(0,3.119535);
   PrevFitTMP1002->SetParLimits(0,0,0);
   PrevFitTMP1002->SetParameter(1,-5.188529);
   PrevFitTMP1002->SetParError(1,0.5302005);
   PrevFitTMP1002->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(PrevFitTMP1002);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *AText = ptstats->AddText("#chi^{2} / ndf = 3.851 / 8");
   AText = ptstats->AddText("p0       = 56.05 #pm  3.12 ");
   AText = ptstats->AddText("p1       = -5.189 #pm 0.5302 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   gre->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(gre->GetListOfFunctions());
   gre->Draw("AP");
   
   TPaveText *pt = new TPaveText(0.3359599,0.9345992,0.6640401,0.9957806,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   AText = pt->AddText("Fake Measurement");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
