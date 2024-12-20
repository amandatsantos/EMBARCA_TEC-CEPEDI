#!/bin/bash

# Variáveis
SRC_DIR="src"
INCLUDE_DIR="include"
BUILD_DIR="build"
OUTPUT="$BUILD_DIR/conversor"

# Verifica se a pasta de saída existe, caso contrário, cria
if [ ! -d "$BUILD_DIR" ]; then
    mkdir -p "$BUILD_DIR"
fi

# Monta a lista de arquivos .c na pasta src
FILES=$(find "$SRC_DIR" -name "*.c")

# Compila o projeto com todos os arquivos .c encontrados
gcc -I"$INCLUDE_DIR" -Wall -Wextra -g3 $FILES -o "$OUTPUT"
if [ $? -ne 0 ]; then
    echo "Erro ao compilar o projeto."
    exit 1
fi

echo "Projeto compilado com sucesso."
echo "Executando o programa..."
"$OUTPUT"
