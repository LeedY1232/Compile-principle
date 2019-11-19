void main() {
    int a, b = 1;
    a = b + 10 / 2 ^ 3;	//pay attention to operition priority
	if(a != 0){
        while(a < 10 && b < 10) {
            a = a * b;
            b = b + 2;
        }
        for(int i = 0; i < 1; i++){ //it's ok if you cannot handle the operator "++"
            i = b;
        }
    }
	else {
		print(a) ; //you can change this to your output function	
	}
}
