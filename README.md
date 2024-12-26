# EMBARCA_TEC-CEPEDI

# Repositório Colaborativo - Prática de Git e GitHub



# colaboradores 

- [brunaalvescabral - Bruna Alves Cabral ](https://github.com/brunaalvescabral)
- [iagovirgilio - Iago Virgílio Lopes Macedo de Oliveira](https://github.com/iagovirgilio)
- [ribeiro51 - Lucas Borges Ribeiro](https://github.com/ribeiro51)
- [PauloCesar53 - Paulo César de Jesus Di Lauro ](https://github.com/PauloCesar53)
- [marques-svnt - Gabriel Marques de Andrade ](https://github.com/Marques-svnt)
- [ArieldosSantosdeCristo -Ariel dos Santos de Cristo Góes ](https://github.com/ArieldosSantosdeCristo)
- [Ma756-max - Marcelo Rick Almeida Santos](https://github.com/Ma756-max)
- [amandatsantos - Amanda Tavares Santos](https://github.com/amandatsantos)


## Objetivo
Este repositório foi criado para auxiliar na assimilação dos conceitos iniciais de **versionamento de código** utilizando **Git** e **GitHub**. O principal foco é o desenvolvimento de habilidades práticas em:

- Uso do Git para controle de versão;
- Colaboração em equipe através de repositórios no GitHub;
- Simulação de um fluxo de trabalho real utilizando boas práticas de versionamento.

## Descrição da Atividade
Os participantes irão configurar um **projeto simples** dentro deste repositório, trabalhando de forma colaborativa. A atividade irá abranger:

1. **Clonagem do repositório**;
2. **Criação e edição de arquivos** no projeto;
3. **Uso de commits** para registrar as modificações;
4. **Criação de branches** para o desenvolvimento de novas funcionalidades;
5. **Realização de merges e pull requests** para integrar o trabalho realizado.

experimentação de um **fluxo de trabalho colaborativo**

# requisitos 

* **Sistema operacional:** Windows/linux
* **Compilador:** GCC 13.2.0 ou superior 


## Ferramentas Utilizadas
- **Git**: Sistema de controle de versão distribuído.
- **GitHub**: Plataforma de hospedagem e compartilhamento de repositórios Git.

## Estrutura do Projeto
O repositório inicial será configurado com a seguinte estrutura:

```
├── README.md   # Descrição do projeto
├── src/        # Pasta para os arquivos-fonte do projeto
├── include/    # Arquivos de cabeçalho do projeto
├── build/      # Pasta para os arquivos compilados
├── build.bat   # Script para compilar e executar no Windows
├── build.sh    # Script para compilar e executar no Linux
└── docs/       # Documentação complementar (opcional)
```

## Como Participar
Siga os passos abaixo para colaborar com este projeto:

1. **Clone o repositório** para a sua máquina local:
   ```bash
   git clone <URL do repositório>
   ```

2. **Crie uma nova branch** para suas alterações:
   ```bash
   git checkout -b minha-branch
   ```

3. **Adicione seus arquivos e faça commits**:
   ```bash
   git add .
   git commit -m "Descrição clara da mudança"
   ```

4. **Envie suas alterações** para o GitHub:
   ```bash
   git push origin minha-branch
   ```

5. **Abra um Pull Request** no GitHub para integrar sua branch na branch principal.

## Trabalhando com Scripts de Compilação e Execução

### **Para Usuários Windows**
1. Abra o terminal na raiz do projeto.
2. Execute o script `build.bat`:
   ```cmd
   build.bat
   ```
   - O script irá compilar todos os arquivos `.c` na pasta `src` e gerar o executável na pasta `build`.
   - Após a compilação, o programa será executado automaticamente.

### **Para Usuários Linux**
1. Certifique-se de que o script `build.sh` está executável:
   ```bash
   chmod +x build.sh
   ```
2. Execute o script:
   ```bash
   ./build.sh
   ```
   - O script irá compilar todos os arquivos `.c` na pasta `src` e gerar o executável na pasta `build`.
   - Após a compilação, o programa será executado automaticamente.

## Boas Práticas
- Utilize mensagens de **commit claras e descritivas**;
- Sempre crie uma **branch** para cada funcionalidade ou correção;
- Revise os **pull requests** antes de aprovar e fazer o merge;
- Utilize o README.md para documentar as modificações ou novas funcionalidades.

## Conclusão
Este projeto servirá como uma excelente oportunidade para prática de versionamento e aprimoramento do trabalho em equipe utilizando Git e GitHub. Ao final, todos os participantes terão um entendimento mais sólido dessas ferramentas essenciais para o desenvolvimento de software.

Bons commits e boa colaboração! 🛠️✨

---

**Dúvidas ou Sugestões?** Entre em contato com o facilitador do projeto.
