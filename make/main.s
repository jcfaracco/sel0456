	.file	"main.c"
	.text
	.globl	x
	.data
	.align 8
	.type	x, @object
	.size	x, 8
x:
	.long	0
	.long	1075970048
	.section	.rodata
.LC1:
	.string	"Hello World "
.LC2:
	.string	"O quadrado de %g \303\251 %g \n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movsd	.LC0(%rip), %xmm0
	movsd	%xmm0, x(%rip)
	leaq	.LC1(%rip), %rdi
	call	puts@PLT
	movl	$1, %edi
	call	mult_set_x@PLT
	movl	$2, %edi
	call	mult_acc@PLT
	movl	%eax, -12(%rbp)
	movl	$4, %edi
	call	mult_acc@PLT
	movl	%eax, -12(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)
	movsd	-24(%rbp), %xmm0
	call	sqr@PLT
	movq	-8(%rbp), %rax
	movapd	%xmm0, %xmm1
	movq	%rax, -24(%rbp)
	movsd	-24(%rbp), %xmm0
	leaq	.LC2(%rip), %rdi
	movl	$2, %eax
	call	printf@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	769658139
	.long	1073127568
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
