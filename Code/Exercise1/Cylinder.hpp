// For Cylinder Calculation

#ifndef YATO_Cylinder_H
#define YATO_Cylinder_H

class Cylinder {
	public:
		Cylinder(Double_t r, Double_t h) : radius(r), height(h){};
	public:
		Double_t Surface(){
			return (TMath::TwoPi() * radius * height 
					+ TMath::TwoPi() * radius * radius);
		};
		Double_t Volume(){
			return (TMath::Pi() * radius * radius * height);
		};
		void Print(){
			cout << "Radius / cm : " << radius << endl 
				<< "Height / cm : " << height << endl 
				<< "Surface / cm2 : " << Surface() << endl 
				<< "Volume / cm3 : " << Volume() << endl;
		};
	private:
		Double_t radius;
		Double_t height;

};

#endif // YATO_Cylinder_H
