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
    reverse(partes.begin(), partes.end());
    string sobrenome = partes[0];
    string nome_completo = partes[1];
    for (int i = 2; i < partes.size(); i++) {
        nome_completo += " " + partes[i];
    }
    return sobrenome + ", " + nome_completo;
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