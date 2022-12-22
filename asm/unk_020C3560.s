	.include "macros/function.inc"
	.include "include/unk_020C3560.inc"

	

	.text


	arm_func_start sub_020C3560
sub_020C3560: ; 0x020C3560
	ldr r0, _020C35C0 ; =0x027FFD9C
	ldr r1, [r0, #0]
	cmp r1, #0x2600000
	blo _020C3580
	cmp r1, #0x2800000
	ldrlo r0, _020C35C4 ; =0x021CCF04
	strlo r1, [r0]
	blo _020C358C
_020C3580:
	ldr r0, _020C35C4 ; =0x021CCF04
	mov r1, #0
	str r1, [r0, #0]
_020C358C:
	ldr r0, _020C35C4 ; =0x021CCF04
	ldr r0, [r0, #0]
	cmp r0, #0
	bne _020C35B0
	ldr r2, _020C35C8 ; =sub_020C35D0
	ldr r1, _020C35C0 ; =0x027FFD9C
	ldr r0, _020C35CC ; =0x027E3000
	str r2, [r1, #0]
	str r2, [r0, #0xfdc]
_020C35B0:
	ldr r0, _020C35C4 ; =0x021CCF04
	mov r1, #0
	str r1, [r0, #8]
	bx lr
	; .align 2, 0
_020C35C0: .word 0x027FFD9C
_020C35C4: .word 0x021CCF04
_020C35C8: .word sub_020C35D0
_020C35CC: .word 0x027E3000
	arm_func_end sub_020C3560

	arm_func_start sub_020C35D0
sub_020C35D0: ; 0x020C35D0
	ldr ip, _020C364C ; =0x021CCF04
	ldr ip, [ip]
	cmp ip, #0
	bne _020C35E4
	b _020C35E8
_020C35E4:
	mov lr, pc
_020C35E8:
	bne _020C35F0
	b _020C35F4
_020C35F0:
	bx ip
_020C35F4:
	ldr ip, _020C3650 ; =sub_02000000
	stmdb ip!, {r0, r1, r2, r3, sp, lr}
	and r0, sp, #1
	mov sp, ip
	mrs r1, cpsr
	and r1, r1, #0x1f
	teq r1, #0x17
	bne _020C361C
	bl sub_020C3654
	b _020C3628
_020C361C:
	teq r1, #0x1b
	bne _020C3628
	bl sub_020C3654
_020C3628:
	ldr ip, _020C364C ; =0x021CCF04
	ldr ip, [ip]
	cmp ip, #0
_020C3634:
	beq _020C3634
_020C3638:
	mov r0, r0
	b _020C3638
_020C3640:
	.byte 0x0F, 0x50, 0xBD, 0xE8, 0x0C, 0xD0, 0xA0, 0xE1, 0x1E, 0xFF, 0x2F, 0xE1
_020C364C: .word 0x021CCF04
_020C3650: .word 0x02000000
	arm_func_end sub_020C35D0

	arm_func_start sub_020C3654
sub_020C3654: ; 0x020C3654
	stmfd sp!, {r0, lr}
	bl sub_020C3668
	bl sub_020C36F8
	ldmia sp!, {r0, lr}
	bx lr
	arm_func_end sub_020C3654

	arm_func_start sub_020C3668
sub_020C3668: ; 0x020C3668
	ldr r1, _020C36F4 ; =0x021CCF30
	mrs r2, cpsr
	str r2, [r1, #0x74]
	str r0, [r1, #0x6c]
	ldr r0, [ip]
	str r0, [r1, #4]
	ldr r0, [ip, #4]
	str r0, [r1, #8]
	ldr r0, [ip, #8]
	str r0, [r1, #0xc]
	ldr r0, [ip, #0xc]
	str r0, [r1, #0x10]
	ldr r2, [ip, #0x10]
	bic r2, r2, #1
	add r0, r1, #0x14
	stmia r0, {r4, r5, r6, r7, r8, sb, sl, fp}
	str ip, [r1, #0x70]
	ldr r0, [r2, #0]
	str r0, [r1, #0x64]
	ldr r3, [r2, #4]
	str r3, [r1, #0]
	ldr r0, [r2, #8]
	str r0, [r1, #0x34]
	ldr r0, [r2, #0xc]
	str r0, [r1, #0x40]
	mrs r0, cpsr
	orr r3, r3, #0x80
	bic r3, r3, #0x20
	msr cpsr_fsxc, r3
	str sp, [r1, #0x38]
	str lr, [r1, #0x3c]
	mrs r2, spsr
	str r2, [r1, #0x7c]
	msr cpsr_fsxc, r0
	bx lr
	; .align 2, 0
_020C36F4: .word 0x021CCF30
	arm_func_end sub_020C3668

	arm_func_start sub_020C36F8
sub_020C36F8: ; 0x020C36F8
	stmfd sp!, {r3, lr}
	ldr r0, _020C375C ; =0x021CCF04
	ldr r0, [r0, #8]
	cmp r0, #0
	ldmeqia sp!, {r3, pc}
	mrs r2, cpsr
	mov r0, sp
	ldr r1, _020C3760 ; =0x0000009F
	msr cpsr_fsxc, r1
	mov r1, sp
	mov sp, r0
	stmfd sp!, {r1, r2}
	bl sub_020C351C
	ldr r0, _020C3764 ; =0x021CCF30
	ldr r1, _020C3768 ; =0x021CCF08
	ldr r1, [r1, #0]
	ldr ip, _020C376C ; =0x021CCF0C
	ldr ip, [ip]
	ldr lr, _020C3770 ; =0x020C3748
	bx ip
_020C3748:
	.byte 0x77, 0xFF, 0xFF, 0xEB, 0x06, 0x00, 0xBD, 0xE8
	.byte 0x01, 0xD0, 0xA0, 0xE1, 0x02, 0xF0, 0x2F, 0xE1, 0x08, 0x80, 0xBD, 0xE8
_020C375C: .word 0x021CCF04
_020C3760: .word 0x0000009F
_020C3764: .word 0x021CCF30
_020C3768: .word 0x021CCF08
_020C376C: .word 0x021CCF0C
_020C3770: .word 0x020C3748
	arm_func_end sub_020C36F8

	.bss


	.global Unk_021CCF04
Unk_021CCF04: ; 0x021CCF04
	.space 0x4

	.global Unk_021CCF08
Unk_021CCF08: ; 0x021CCF08
	.space 0x4

	.global Unk_021CCF0C
Unk_021CCF0C: ; 0x021CCF0C
	.space 0x4

	.global Unk_021CCF10
Unk_021CCF10: ; 0x021CCF10
	.space 0x20

	.global Unk_021CCF30
Unk_021CCF30: ; 0x021CCF30
	.space 0x80
