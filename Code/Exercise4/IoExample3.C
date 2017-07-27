void IoExample3() {

   TFile* file = new TFile("outfile.root","READ"); 

   if (file == NULL) {
     cout << "File not found." << endl;
     exit(1);
   }
   file->ls();

   TH1* hist = NULL;
   TString objName = "hist";
   file->GetObject(objName, hist);
   
   if (hist == NULL) {
     cout << "Object " << objName 
          << " not found in file."
          << endl;
     exit(1);
   }
   hist->Draw();
   file->Close();
   delete file;
}
