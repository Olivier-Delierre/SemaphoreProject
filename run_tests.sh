#!/bin/bash

make test
./test/bin/SemaphoreProjTest

error=1

while [ $error -ne 0 ]; do
    echo "Nettoyer les tests ? (O/n) "
    read reponse

    if [ $reponse == "O" ] || [ $reponse == "o" ]; then
        error=0
        make test-mrproper
    elif [ $reponse != "N" ] && [ $reponse != "n" ]; then
        echo "Réponse incorrecte."
    else
        error=0;
    fi
done