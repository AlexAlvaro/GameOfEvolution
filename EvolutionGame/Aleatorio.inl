void Aleatorio::interactua()
{
    cout << "Soy Aleatorin mi personalidad es: " << endl
         << "Hago lo que menos te puedas imaginar, en el orden que no puedas entender" << endl;

}
bool Aleatorio::actuando(bool ac, int turno)
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
    srand(time(NULL));
    ac = rand() % 2;
    return ac;
}