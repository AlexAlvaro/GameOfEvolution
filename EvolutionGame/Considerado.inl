int Considerado::get_ren()
{
    return Rencor;
}
void Considerado::set_ren(int r)
{
    Rencor = r;
}
void Considerado::interactua()
{
    cout << "Soy Considerado mi Personalidad es :" << endl
         << "Si me enganas 2 veces te enganare Siempre" << endl;
}
bool Considerado::actuando(bool ac, int turno)
{
    string ven;
    int x;
    x = get_ren();
    if (ac == 0)
    {
        ven = "Enganaste";
        x = x + 1;
        set_ren(x);
        cout << "Me enganaste " << get_ren() << " Veces" << endl;

        if (Rencor > 1)
        {
            cout << "Ahora te enganare Siempre" << endl;
            ac = 0;
            return ac;
        }
        else
        {
            cout << "Todavia no te enganare" << endl;
            ac = 1;
            return ac;
        }
    }
    else
    {
        ven = "Cooperaste";
        if (Rencor > 1)
        {
            cout << "Ahora te enganare Siempre" << endl;
            ac = 0;
            return ac;
        }
        else
        {
            cout << "Hare lo mismo" << endl;
            return ac;
        }
    }
}