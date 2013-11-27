silent open default.out
setlocal ar
silent vs default.cpp
silent wincmd l
silent sp default.in
nmap <silent> <F9> :wincmd h <CR> :SCCompileRun <CR><CR><CR><CR>
nmap <silent> <F10> :! <CR>
