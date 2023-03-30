string transforma_nome(string nome) {
    vector<string> partes;
    string parte;
    for (int i = 0; i < nome.length(); i++) {
        if (nome[i] != ' ') {
            parte += nome[i];
        } else {
            partes.push_back(parte);
            parte = "";
        }
    }
    partes.push_back(parte);
    string sobrenome = partes[partes.size()-1];
    string iniciais;
    for (int i = 0; i < partes.size()-1; i++) {
        iniciais += partes[i][0];
        iniciais += ". ";
    }
    iniciais.erase(iniciais.end()-2, iniciais.end());
    transform(sobrenome.begin(), sobrenome.end(), sobrenome.begin(), ::toupper);
    return sobrenome + ", " + iniciais;
}

int main() {
    ifstream arquivo_nomes("nomes.txt");
    if (!arquivo_nomes.is_open()) {
        cout << "Erro ao abrir o arquivo de nomes." << endl;
        return 1;
    }

    string nome;
    while (getline(arquivo_nomes, nome)) {
        string nome_transformado = transforma_nome(nome);
        cout << nome_transformado << endl;
    }

    arquivo_nomes.close();
    return 0;
}