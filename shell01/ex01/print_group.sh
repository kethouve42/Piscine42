#!/bin/bash

# Specifier le nom de l' utilisateur dans la variable USER_NAME
USER_NAME="kethouve"

# Utiliser la commande `id` pour obtenir les informations sur l'utilisateur et ses groupes
USER_INFO=$(id -Gn "$USER_NAME")

# Remplacer les espaces par des virgules
GROUP_LIST=$(echo "$USER_INFO" | tr ' ' ',')

# Afficher la liste des groupes
echo "$GROUP_LIST"

