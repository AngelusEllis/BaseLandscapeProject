<GameProjectFile>
  <PropertyGroup Type="Scene" Name="Game" ID="0e024d41-4316-4cbb-8b43-64bf408483c5" Version="2.3.2.3" />
  <Content ctype="GameProjectContent">
    <Content>
      <Animation Duration="0" Speed="1.0000" />
      <ObjectData Name="Scene" ctype="GameNodeObjectData">
        <Size X="960.0000" Y="640.0000" />
        <Children>
          <AbstractNodeData Name="bg" Visible="False" ActionTag="-1843629797" Tag="16" IconVisible="False" LeftMargin="-75.8176" RightMargin="-4064.1826" TopMargin="28.7807" BottomMargin="11.2193" ctype="SpriteObjectData">
            <Size X="5100.0000" Y="600.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="2474.1824" Y="311.2193" />
            <Scale ScaleX="1.0000" ScaleY="1.3909" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="2.5773" Y="0.4863" />
            <PreSize X="0.0000" Y="0.0000" />
            <FileData Type="Normal" Path="background.jpg" Plist="" />
            <BlendFunc Src="770" Dst="771" />
          </AbstractNodeData>
          <AbstractNodeData Name="Particle_1" ActionTag="499146104" Tag="7" IconVisible="True" LeftMargin="1054.0000" RightMargin="-94.0000" TopMargin="271.0000" BottomMargin="369.0000" ctype="ParticleObjectData">
            <Size X="0.0000" Y="0.0000" />
            <AnchorPoint />
            <Position X="1054.0000" Y="369.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="1.0979" Y="0.5766" />
            <PreSize X="0.0000" Y="0.0000" />
            <FileData Type="Normal" Path="particle_texture (1).plist" Plist="" />
            <BlendFunc Src="770" Dst="1" />
          </AbstractNodeData>
          <AbstractNodeData Name="PlayerShip" ActionTag="1172907418" Tag="14" RotationSkewX="90.0000" RotationSkewY="90.0000" IconVisible="False" HorizontalEdge="BothEdge" VerticalEdge="BothEdge" LeftMargin="-213.7000" RightMargin="592.7000" TopMargin="-271.0000" BottomMargin="-271.0000" ctype="SpriteObjectData">
            <Size X="581.0000" Y="1182.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="76.8000" Y="320.0000" />
            <Scale ScaleX="0.1200" ScaleY="0.1200" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.0800" Y="0.5000" />
            <PreSize X="0.0000" Y="0.0000" />
            <FileData Type="Normal" Path="PlayerShip.png" Plist="" />
            <BlendFunc Src="770" Dst="771" />
          </AbstractNodeData>
          <AbstractNodeData Name="fire_button" ActionTag="1208625587" Alpha="178" Tag="13" IconVisible="False" HorizontalEdge="BothEdge" VerticalEdge="BothEdge" LeftMargin="852.8000" RightMargin="27.2000" TopMargin="536.0000" BottomMargin="24.0000" TouchEnable="True" FontSize="36" ButtonText="Fire" Scale9Enable="True" LeftEage="15" RightEage="15" TopEage="11" BottomEage="11" Scale9OriginX="15" Scale9OriginY="11" Scale9Width="16" Scale9Height="14" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="ButtonObjectData">
            <Size X="80.0000" Y="80.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="892.8000" Y="64.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="0" B="0" />
            <PrePosition X="0.9300" Y="0.1000" />
            <PreSize X="0.0833" Y="0.1250" />
            <TextColor A="255" R="0" G="0" B="0" />
            <DisabledFileData Type="Default" Path="Default/Button_Disable.png" Plist="" />
            <PressedFileData Type="Default" Path="Default/Button_Press.png" Plist="" />
            <NormalFileData Type="Default" Path="Default/Button_Normal.png" Plist="" />
            <OutlineColor A="255" R="255" G="0" B="0" />
            <ShadowColor A="255" R="110" G="110" B="110" />
          </AbstractNodeData>
          <AbstractNodeData Name="up_button" ActionTag="-725265826" Alpha="178" Tag="11" IconVisible="False" HorizontalEdge="BothEdge" VerticalEdge="BothEdge" LeftMargin="17.2000" RightMargin="842.8000" TopMargin="14.0000" BottomMargin="526.0000" TouchEnable="True" FontSize="14" Scale9Enable="True" LeftEage="15" RightEage="15" TopEage="11" BottomEage="11" Scale9OriginX="15" Scale9OriginY="11" Scale9Width="50" Scale9Height="60" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="ButtonObjectData">
            <Size X="100.0000" Y="100.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="67.2000" Y="576.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.0700" Y="0.9000" />
            <PreSize X="0.1042" Y="0.1563" />
            <TextColor A="255" R="65" G="65" B="70" />
            <DisabledFileData Type="Normal" Path="arrowPressed.png" Plist="" />
            <PressedFileData Type="Normal" Path="arrowPressed.png" Plist="" />
            <NormalFileData Type="Normal" Path="arrow.png" Plist="" />
            <OutlineColor A="255" R="255" G="0" B="0" />
            <ShadowColor A="255" R="110" G="110" B="110" />
          </AbstractNodeData>
          <AbstractNodeData Name="down_button" ActionTag="-751318210" Alpha="178" Tag="12" IconVisible="False" HorizontalEdge="BothEdge" VerticalEdge="BothEdge" LeftMargin="17.2000" RightMargin="842.8000" TopMargin="526.0000" BottomMargin="14.0000" TouchEnable="True" FlipY="True" FontSize="14" Scale9Enable="True" LeftEage="15" RightEage="15" TopEage="11" BottomEage="11" Scale9OriginX="15" Scale9OriginY="11" Scale9Width="50" Scale9Height="60" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="ButtonObjectData">
            <Size X="100.0000" Y="100.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="67.2000" Y="64.0000" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.0700" Y="0.1000" />
            <PreSize X="0.1042" Y="0.1563" />
            <TextColor A="255" R="65" G="65" B="70" />
            <DisabledFileData Type="Normal" Path="arrowPressed.png" Plist="" />
            <PressedFileData Type="Normal" Path="arrowPressed.png" Plist="" />
            <NormalFileData Type="Normal" Path="arrow.png" Plist="" />
            <OutlineColor A="255" R="255" G="0" B="0" />
            <ShadowColor A="255" R="110" G="110" B="110" />
          </AbstractNodeData>
        </Children>
      </ObjectData>
    </Content>
  </Content>
</GameProjectFile>