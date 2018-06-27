// Metodos de Simplon //
int Rencoroso::get_ren()
{
    return Rencor;
}
void Rencoroso::set_ren(int r)
{
    Rencor = r;
}
void Rencoroso::interactua()
{
    cout << "Soy Rencoroso mi Personalidad es :" << endl
         << "Si me enganas una vez, siempre te enganare" << endl;
}
// Metodos generales //
bool Rencoroso::actuando(bool ac, int turno)
{
    string ven;
    if (ac == 0)
    {
        ven = "Enganaste";
        cout << "Ahora siempre te enganare" << endl;
        set_ren(Rencor + 1);
        ac = 1;
        return ac;
    }
    else
    {
        ven = "Cooperaste";
        if (Rencor == 0)
        {
            cout << "Yo te cooperare tambien" << endl;
            ac = 1;
            return ac;
        }
        else
        {
            cout << "Pero ya me tracionaste anteriormente" << endl;
            ac = 1;
            return ac;
        }
    }
}