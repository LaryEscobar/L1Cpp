#include <iostream> 
	#include<stdio.h>
	
	using namespace std;
	int main (){
	
	int nota ;
	
	cout <<" Ingrese la nota obtenida: " << endl;
	cin >> nota; 
	
	
	
	if (nota >= 0 && nota <= 4){
	   cout <<" Obtuvo una F-- " <<endl;
	
	}  else {
	
	        if (nota >= 5 && nota <= 9 ){
	        cout <<" Obtuvo una  F- " <<endl;	
	       } else {
	            if (nota >=10 && nota <= 14){
	             cout <<" Obtuvo una F " <<endl;	
	            } else {
	                if (nota >= 15 && nota <= 19 ){
					cout <<" Obtuvo una F " <<endl;	
					} else {
						if (nota >= 20  && nota <= 24 ){
						cout <<" Obtuvo una F+" <<endl;
						} else { 
						    if (nota >= 25 && nota <= 29 ){
							cout <<" Obtuvo una E- " <<endl;
							} else {
								if (nota >= 30 && nota <= 34 ){
								cout <<" Obtuvo una E " <<endl;
								} else {
									if (nota >= 35 && nota <= 39 ){
									cout <<" Obtuvo una E+ " <<endl;
									} else { 
										if (nota >= 40 && nota <= 44 ){
										cout <<" Obtuvo una D- " <<endl;
										}else {
										   if (nota >= 45 && nota <= 49 ){
											cout <<" Obtuvo una D " <<endl;
											} else {
												if (nota >= 50 && nota <= 54 ){
												cout <<" Obtuvo una D+ " <<endl;
												} else {
													if (nota >= 55 && nota <= 59 ){
													cout <<" Obtuvo una C- " <<endl;
													} else {
														if (nota >= 60 && nota <= 64 ){
														cout <<" Obtuvo una C  " <<endl;
														}  else {
														    if (nota >= 65 && nota <= 69 ){
															cout <<" Obtuvo una C+ " <<endl;
															}else {
																if (nota >= 70 && nota <= 74 ){
																cout <<" Obtuvo una B- " <<endl;
																} else {
																	if (nota >75 && nota <= 79){
																	cout << " Obtuvo una B " <<endl;
																	} else {
																		if (nota >80 && nota <= 84){
																		cout << " Obtuvo una B+ " <<endl;
																		} else {
																			if (nota >85 && nota <= 89){
																			cout << " Obtuvo una A- " <<endl;
																			} else {
																				if (nota >90 && nota <= 94){
																				cout << " Obtuvo una A " <<endl;
																				} else {
																					if (nota >95 && nota <= 99){
																					cout << " Obtuvo una A+ " <<endl;
																					}else {
																						if (nota = 100){
																						 cout << " Obtuvo una A++ " <<endl;
																					    } else {
																					cout << "Ingrese un valor de 0 a 100" <<endl;
																				 }
																			}
																		}
																	}
															    }
															}
													    }
												    }
							                    }           
					                       } 
				                        }
		                            }
	                            }
                            }
	                    }
	                }	
				}
			}
	    }
   }
}
	
	
	system("pause");
	return 0;
}