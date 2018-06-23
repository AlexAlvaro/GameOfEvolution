void Detective::interactua()
{
  cout << "Watson mi querido elemental: " << endl << "Ya tu saa..." << endl;
}
int Detective::get_ModeJekyll()
{
  return Ira;
}
void Detective::set_ModeJekyll()
{
  Ira = i;
}
bool Detective::actuando(bool ac, int turno)
{
  string ven;
  //primer turno
  if (ac == 0)
  {
    ven = "Enganaste";
    cout << "Modo copy en potencia." << endl;
    set_ModeJekyll(Ira + 1)
  }
  else
  {
    ven = "Cooperaste";
  }
  cout << endl << "Me " << ven << " en el turno: " << turno + 1 << " Mmmmm..." << endl;
  ac = 1;
  return ac;
  //segundo turno
  if (ac == 0)
  {
    ven = "Enganaste";
    cout << "Modo copy en potencia." << endl;
    set_ModeJekyll(Ira + 1)
  }
  else
  {
    ven = "Cooperaste";
  }
  cout << endl << "Me " << ven << " en el turno: " << turno + 1 << " Mmmmm..." << endl;
  ac = 0;
  return ac;
  //tercer turno
  if (ac == 0)
  {
    ven = "Enganaste";
    cout << "Modo copy en potencia." << endl;
    set_ModeJekyll(Ira + 1)
  }
  else
  {
    ven = "Cooperaste";
  }
  cout << endl << "Me " << ven << " en el turno: " << turno + 1 << " Mmmmm..." << endl;
  ac = 1;
  return ac;
  //cuarto turno
  if (ac == 0)
  {
    ven = "Enganaste";
    cout << "Modo copy en potencia." << endl;
    set_ModeJekyll(Ira + 1)
  }
  else
  {
    ven = "Cooperaste";
  }
  cout << endl << "Me " << ven << " en el turno: " << turno + 1 << " Mmmmm..." << endl;
  ac = 1;
  return ac;
  //resto de turnos
  if (Ira >= 1)
  {
    if (ac == 0)
    {
      ven = "Enganaste";
    }
    else
    {
      ven = "Cooperaste";
    }
    cout << endl
         << "Me " << ven << " en el turno: " << turno + 1 << " Hare lo mismo al proxinom Turno" << endl;
    return ac;
  }
}
else
{
  if (ac == 0)
  {
    ven = "Enganaste";
  }
  else
  {
    ven = "Cooperaste";
  }
  cout << endl
       << "Me " << ven << " en el turno: " << turno + 1 << " Igual, Siempre Te enganare" << endl;
  ac = 0;
  return ac;
}
/*
  		if(ac==0){
  			ven="Enganaste";

        set_ModeJekyll(Ira+1);
        cout<<endl<<"Me "<< ven <<" en el turno: "<< turno+1<<" Hare lo mismo al proxinom Turno" << endl;
            return ac;
        }
  		}
  		else{
  			ven="Cooperaste";
  		}
  		cout<<endl<<"Me "<< ven <<" en el turno: "<< turno+1<<" Igual, Siempre Colaboro" << endl;
          ac = 1;
          return ac;*/
}
