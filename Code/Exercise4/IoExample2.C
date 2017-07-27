void IoExample2() {

   TFile* file = new TFile("outfile.root","READ"); 

   file->ls();
   TH1* hist = NULL;
   file->GetObject("histo", hist);
   
   hist->Draw();
   file->Close();
   delete file;
}
