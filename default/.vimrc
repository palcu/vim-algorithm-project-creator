silent open adunare.out
setlocal ar
silent vs adunare.cpp
silent wincmd l
silent sp adunare.in
nmap <silent> <F9> :wincmd h <CR> :SCCompileRun <CR><CR><CR><CR>
nmap <silent> <F10> :! <CR>
