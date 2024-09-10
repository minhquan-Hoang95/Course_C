# Voici le code que vous pouvez ajouter à la fin du fichier $HOME/.bashrc
#    option -g pour les informations de debugage
#    option -Wall pour avoir plus de warnings
#    option -Wextra pour avoir encore plus de warnings
#    option -pedantic pour respecter la norme du C (et interdire les extensions
#                     propres à gcc)
#    option -std=c99 pour choisir la norme C99 du C
#    option -Werror (facultatif) pour tranformer un warning en erreur
#    remarque : on ne met pas l'option "-o" dans l'alias
alias mygcc='gcc -g -Wall -Wextra -pedantic -std=c99'

# lorsqu'on modifie le .bashrc il faut faire une (au choix) des trois actions
# suivantes :
# - relancer un nouveau terminal
# - $ source ~/.bashrc
# - $ . ~/.bashrc


# utilisation pour compiler le fichier toto.c :
# $ mygcc toto.c -o toto

# utilisation pour compiler une appli composer des trois fichiers main.c
# calcul.c et utils.c :
# $ mygcc main.c calcul.c et utils.c -o main






# Rien à voir avec le module mais quelques autres alias
# qui peuvent être utiles
# RTFM pour le rôle des options

alias cp='cp -i'
alias mv='mv -i'

alias ls='ls --time-style=long-iso -CF --color'
alias l='ls -l'
function ll ()
{
    pwd
    ls -laG "$@" | more
}






# et un peu plus ésotérique

# pour un dump d'une fichier
alias myod='od -Ad -w10 -t u1z'
#alias myod='od -Ad -w10 -t x1z'
# note : "hexdump -C" donne un résultat similaire

# pour un log condensé de git
alias gitlog="git log --oneline --decorate --branches --graph"






# et pour les curieux : empiler les répertoires visités par cd

# la commande "cd" va dans le répertoire visé et l'ajoute à la pile
function cd ()
{
    pushd "$*" > /dev/null
    echo `pwd`
}

# la commande "bd" (pour back directory) revient au dernier répertoire empilé
alias bd='popd > /dev/null; echo `pwd`'
