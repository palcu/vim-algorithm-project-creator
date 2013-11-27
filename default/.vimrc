silent open default.out
setlocal ar
silent vs default.cpp
silent wincmd l
silent sp default.in
map <silent> <F8> :!cgdb %:r <CR>
map <silent> <F9> :wincmd h <CR> :SCCompileRun <CR><CR><CR><CR>
map <silent> <F10> :! <CR>
