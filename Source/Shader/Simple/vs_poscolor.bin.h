static const uint8_t vs_poscolor_essl[279] =
{
	0x56, 0x53, 0x48, 0x05, 0x37, 0x86, 0x56, 0x8b, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0x61, 0x74, // VSH.7.V.......at
	0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, // tribute highp ve
	0x63, 0x34, 0x20, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x61, 0x74, 0x74, // c4 a_color0;.att
	0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, // ribute highp vec
	0x34, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x76, 0x61, // 4 a_position;.va
	0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, // rying highp vec4
	0x20, 0x76, 0x5f, 0x66, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x6f, //  v_fragColor;.vo
	0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x67, // id main ().{.  g
	0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, // l_Position = a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, // osition;.  highp
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, //  vec4 tmpvar_1;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, //   tmpvar_1.xyz =
	0x20, 0x28, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, //  (a_color0.xyz *
	0x20, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x77, 0x29, 0x3b, 0x0a, 0x20, 0x20, //  a_color0.w);.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x63, // tmpvar_1.w = a_c
	0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x77, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x66, 0x72, 0x61, // olor0.w;.  v_fra
	0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // gColor = tmpvar_
	0x31, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                       // 1;.}...
};
static const uint8_t vs_poscolor_glsl[255] =
{
	0x56, 0x53, 0x48, 0x05, 0x37, 0x86, 0x56, 0x8b, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x61, 0x74, // VSH.7.V.......at
	0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x61, 0x5f, 0x63, // tribute vec4 a_c
	0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, // olor0;.attribute
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, //  vec4 a_position
	0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, // ;.varying vec4 v
	0x5f, 0x66, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, // _fragColor;.void
	0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, //  main ().{.  gl_
	0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, // Position = a_pos
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, // ition;.  vec4 tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // pvar_1;.  tmpvar
	0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // _1.xyz = (a_colo
	0x72, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // r0.xyz * a_color
	0x30, 0x2e, 0x77, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // 0.w);.  tmpvar_1
	0x2e, 0x77, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x77, 0x3b, // .w = a_color0.w;
	0x0a, 0x20, 0x20, 0x76, 0x5f, 0x66, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, // .  v_fragColor =
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,       //  tmpvar_1;.}...
};
static const uint8_t vs_poscolor_spv[826] =
{
	0x56, 0x53, 0x48, 0x05, 0x37, 0x86, 0x56, 0x8b, 0x00, 0x00, 0x24, 0x03, 0x00, 0x00, 0x03, 0x02, // VSH.7.V...$.....
	0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x08, 0x00, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, // #...............
	0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, // ..GLSL.std.450..
	0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, // ................
	0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, // ..........main..
	0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x42, 0x00, // ..3...6...?...B.
	0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, // ................
	0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, // ......main......
	0x05, 0x00, 0x33, 0x00, 0x00, 0x00, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, // ..3...a_color0..
	0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x36, 0x00, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, // ......6...a_posi
	0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x0a, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x40, 0x65, // tion......?...@e
	0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, // ntryPointOutput.
	0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x05, 0x00, // gl_Position.....
	0x0a, 0x00, 0x42, 0x00, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, // ..B...@entryPoin
	0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x76, 0x5f, 0x66, 0x72, 0x61, 0x67, 0x43, 0x6f, // tOutput.v_fragCo
	0x6c, 0x6f, 0x72, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x33, 0x00, 0x00, 0x00, 0x1e, 0x00, // lor...G...3.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x36, 0x00, 0x00, 0x00, 0x1e, 0x00, // ......G...6.....
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x0b, 0x00, // ......G...?.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x42, 0x00, 0x00, 0x00, 0x1e, 0x00, // ......G...B.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, // ..............!.
	0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x06, 0x00, // ................
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x06, 0x00, // .. .............
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x19, 0x00, 0x00, 0x00, 0x06, 0x00, // ................
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x32, 0x00, 0x00, 0x00, 0x01, 0x00, // ...... ...2.....
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x32, 0x00, 0x00, 0x00, 0x33, 0x00, // ......;...2...3.
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x32, 0x00, 0x00, 0x00, 0x36, 0x00, // ......;...2...6.
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x03, 0x00, // ...... ...>.....
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x3f, 0x00, // ......;...>...?.
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x42, 0x00, // ......;...>...B.
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, // ......6.........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, // ................
	0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x33, 0x00, // ..=.......4...3.
	0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0x00, 0x36, 0x00, // ..=.......7...6.
	0x00, 0x00, 0x4f, 0x00, 0x08, 0x00, 0x19, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x34, 0x00, // ..O.......]...4.
	0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, // ..4.............
	0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x34, 0x00, // ..Q...........4.
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x05, 0x00, 0x19, 0x00, 0x00, 0x00, 0x60, 0x00, // ..............`.
	0x00, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, // ..].......Q.....
	0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x51, 0x00, // ......4.......Q.
	0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, // ......c...`.....
	0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x60, 0x00, // ..Q.......d...`.
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x65, 0x00, // ......Q.......e.
	0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x07, 0x00, // ..`.......P.....
	0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x65, 0x00, // ..f...c...d...e.
	0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x84, 0x00, // ......Q.........
	0x00, 0x00, 0x37, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x04, 0x00, 0x06, 0x00, // ..7.............
	0x00, 0x00, 0x6a, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x52, 0x00, 0x06, 0x00, 0x07, 0x00, // ..j.......R.....
	0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0x6a, 0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0x00, 0x01, 0x00, // ......j...7.....
	0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0x3e, 0x00, // ..>...?.......>.
	0x03, 0x00, 0x42, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, // ..B...f.......8.
	0x01, 0x00, 0x00, 0x02, 0x05, 0x00, 0x01, 0x00, 0x00, 0x00,                                     // ..........
};
static const uint8_t vs_poscolor_mtl[642] =
{
	0x56, 0x53, 0x48, 0x05, 0x37, 0x86, 0x56, 0x8b, 0x00, 0x00, 0x73, 0x02, 0x00, 0x00, 0x75, 0x73, // VSH.7.V...s...us
	0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, // ing namespace me
	0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // tal;.struct xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, // MtlShaderInput {
	0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // .  float4 a_colo
	0x72, 0x30, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x30, // r0 [[attribute(0
	0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x61, 0x5f, // )]];.  float4 a_
	0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, // position [[attri
	0x62, 0x75, 0x74, 0x65, 0x28, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, // bute(1)]];.};.st
	0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, // ruct xlatMtlShad
	0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, // erOutput {.  flo
	0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, // at4 gl_Position 
	0x5b, 0x5b, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, // [[position]];.  
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x76, 0x5f, 0x66, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, // float4 v_fragCol
	0x6f, 0x72, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, // or;.};.struct xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, // atMtlShaderUnifo
	0x72, 0x6d, 0x20, 0x7b, 0x0a, 0x7d, 0x3b, 0x0a, 0x76, 0x65, 0x72, 0x74, 0x65, 0x78, 0x20, 0x78, // rm {.};.vertex x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, // latMtlShaderOutp
	0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, // ut xlatMtlMain (
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, // xlatMtlShaderInp
	0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, // ut _mtl_i [[stag
	0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, // e_in]], constant
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, //  xlatMtlShaderUn
	0x69, 0x66, 0x6f, 0x72, 0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, // iform& _mtl_u [[
	0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, // buffer(0)]]).{. 
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, //  xlatMtlShaderOu
	0x74, 0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x5f, // tput _mtl_o;.  _
	0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, // mtl_o.gl_Positio
	0x6e, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x70, 0x6f, 0x73, // n = _mtl_i.a_pos
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, // ition;.  float4 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, // tmpvar_1 = 0;.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x28, // tmpvar_1.xyz = (
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, // _mtl_i.a_color0.
	0x78, 0x79, 0x7a, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x61, 0x5f, 0x63, // xyz * _mtl_i.a_c
	0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x77, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // olor0.w);.  tmpv
	0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, // ar_1.w = _mtl_i.
	0x61, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x77, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, // a_color0.w;.  _m
	0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x76, 0x5f, 0x66, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // tl_o.v_fragColor
	0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x72, //  = tmpvar_1;.  r
	0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, // eturn _mtl_o;.}.
	0x0a, 0x00,                                                                                     // ..
};
static const uint8_t vs_poscolor_dx9[219] =
{
	0x56, 0x53, 0x48, 0x05, 0x37, 0x86, 0x56, 0x8b, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x03, // VSH.7.V.........
	0xfe, 0xff, 0xfe, 0xff, 0x14, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x23, 0x00, // ......CTAB....#.
	0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x11, // ................
	0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x76, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, // ......vs_3_0.Mic
	0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, // rosoft (R) HLSL 
	0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, // Shader Compiler 
	0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, 0x00, 0x00, // 10.1............
	0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, // ................
	0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, // ................
	0x00, 0x80, 0x01, 0x00, 0x0f, 0xe0, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, // ................
	0xe4, 0x90, 0x05, 0x00, 0x00, 0x03, 0x01, 0x00, 0x07, 0x80, 0x00, 0x00, 0xff, 0x90, 0x00, 0x00, // ................
	0xe4, 0x90, 0x01, 0x00, 0x00, 0x02, 0x01, 0x00, 0x08, 0x80, 0x00, 0x00, 0xff, 0x90, 0x01, 0x00, // ................
	0x00, 0x02, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0xe4, 0x80, 0x01, 0x00, 0x00, 0x02, 0x01, 0x00, // ................
	0x0f, 0xe0, 0x01, 0x00, 0xe4, 0x80, 0xff, 0xff, 0x00, 0x00, 0x00,                               // ...........
};
static const uint8_t vs_poscolor_dx11[418] =
{
	0x56, 0x53, 0x48, 0x05, 0x37, 0x86, 0x56, 0x8b, 0x00, 0x00, 0x8c, 0x01, 0x00, 0x00, 0x44, 0x58, // VSH.7.V.......DX
	0x42, 0x43, 0xb0, 0x03, 0x7f, 0x9c, 0x2a, 0x5c, 0x6f, 0x7e, 0xa4, 0xdb, 0xda, 0xce, 0xdd, 0x56, // BC....*.o~.....V
	0x72, 0x8e, 0x01, 0x00, 0x00, 0x00, 0x8c, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, // r.............,.
	0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x48, 0x00, // ..|.......ISGNH.
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........8.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, // ................
	0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // ..>.............
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, // ..........COLOR.
	0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x4c, 0x00, // POSITION..OSGNL.
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........8.....
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, // ................
	0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // ..D.............
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, // ..........SV_POS
	0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0xab, 0xab, 0x53, 0x48, // ITION.COLOR...SH
	0x44, 0x52, 0xb4, 0x00, 0x00, 0x00, 0x40, 0x00, 0x01, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x5f, 0x00, // DR....@...-..._.
	0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0xf2, 0x10, // .........._.....
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, // ......g.... ....
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x01, 0x00, // ......e.... ....
	0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0xf2, 0x00, // ..h.......6.....
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x1e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, // ......F.......8.
	0x00, 0x07, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0xf6, 0x1f, 0x10, 0x00, 0x00, 0x00, // ..r.............
	0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x82, 0x00, // ..F.......6.....
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3a, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, // ......:.......6.
	0x00, 0x05, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, // ... ......F.....
	0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0xf2, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, // ..6.... ......F.
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x02, 0x05, 0x00, 0x01, 0x00, // ......>.........
	0x00, 0x00,                                                                                     // ..
};
extern const uint8_t* vs_poscolor_pssl;
extern const uint32_t vs_poscolor_pssl_size;