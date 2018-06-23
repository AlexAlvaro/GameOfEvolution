
    void Cooperative::interactua()
    {
        cout << "Soy Cooperative mi Personalidad es :"<<endl<<"Siempre Colaboro" << endl;
    }
	
    bool Cooperative::actuando(bool ac, int turno)
    {
		string ven;
		if(ac==0){
			ven="Enganaste";
		}
		else{
			ven="Cooperaste";
		}
		cout<<endl<<"Me "<< ven <<" en el turno: "<< turno+1<<" Igual, Siempre Colaboro" << endl;
        ac = 1;
        return ac;
    }

