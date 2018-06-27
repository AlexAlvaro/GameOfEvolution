void Abuson::interactua()
{
    cout << "Soy Abuson mi Personalidad es :" << endl
         << " Siempre Engano" << endl;
}
bool Abuson::actuando(bool ac, int turno)
{
    string ven;
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