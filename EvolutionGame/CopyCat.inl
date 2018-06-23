//CopyCat::CopyCat(int C, bool A) : Character::Character(C, A){}
void CopyCat::interactua()
{
    cout << "Soy CopyCat mi Personalidad es :" << endl
         << "Se adapta al contendiente" << endl;
}
bool CopyCat::actuando(bool ac, int turno)
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
    cout << endl << "Me " << ven << " en el turno: " << turno + 1 << " Hare lo mismo al proxinom Turno" << endl;
    
    return ac;
}
