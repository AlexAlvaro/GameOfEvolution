// Metodos de Simplon // 
int Simplon::get_ren()
{
    return Rencor;
}
void Simplon::set_ren(int r)
{
    Rencor = r;
}
int Simplon::get_ulti()
{
    return ulti;
}
void Simplon::set_ulti(int u)
{
    ulti = u;
}

// Metodos generales //
void Simplon::interactua()
{
    cout << "Soy Simplon mi Personalidad es :" << endl
         << "Si tu cooperas, yo hago lo mismo como ultimo movimiento,Si vuelves a enganar, yo hago lo contrario como ultimo movimiento" << endl;
}
bool Simplon::actuando(bool ac, int turno)
{
    string ven;
    turno = turno + 1;
    int x;
    x = get_ren();
    if (turno == 5) //Cambiar si es que se cambia NumTurn
    {
        cout << "Ahora mi ultimo Movimiento ha llegado" << endl;
        return ulti;
    }
    else
    {
        cout << "Estamos en el turno " << turno << " Todavia Falta" << endl;
        if (ac == 0)
        {
            ven = "Enganaste";
            x = x + 1;
            set_ren(x);
            if (Rencor > 1)
            {
                set_ulti(1);
            }
            else
            {
                set_ulti(0);
                return ac;
            }
        }
        else
        {
            ven = "Cooperaste";
            set_ulti(1);
            return ac;
        }
    }
}

