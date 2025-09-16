/*
 * carsales.c++
 * 
 * Copyright 2025 denso <denso@NOLANSCOMPUTER>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <string>
using namepsace std;

int main()
{
	int corollaSales=0,camrySales=0;
	
	int total=0,difference=4;
	double ratio;
	
	cout<<"what is the total sales of corolla?";
	cin>>corollaSales;
	cout<<"what is the total sales of camry";
	cin>>camrySales;
	
	total = corollaSales+camrySales;
	
	ratio = static_cast<double>corollaSales/camrySales;
	
	cout<<"\n ==================";
	cout<<"\n Sales statistics from the toyota Dealer";
	cout<<"\n Corolla Sales:"<<corollaSales;
	cout<<"\n Carry Sales:"<<camrySales;
	cout<<"\n Total sales:"<<total;
	cout<<"\n The Sales of Corolla is"<<difference<<"more than camry";
	cout<<"\n ===================";
	
	return 0;
}

