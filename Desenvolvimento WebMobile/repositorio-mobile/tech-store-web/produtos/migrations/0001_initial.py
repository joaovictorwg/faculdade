# Generated by Django 5.1.3 on 2024-11-29 01:40

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='Produtos',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('titulo', models.CharField(max_length=100)),
                ('descricao', models.CharField(max_length=600)),
                ('estado', models.SmallIntegerField(choices=[(1, 'HARDWARE'), (2, 'PERIFERICOS'), (3, 'GAMES'), (4, 'COMPUTADORES')])),
                ('categoria', models.SmallIntegerField(choices=[(1, 'HARDWARE'), (2, 'PERIFERICOS'), (3, 'GAMES'), (4, 'COMPUTADORES')])),
                ('foto', models.ImageField(blank=True, null=True, upload_to='veiculo/fotos')),
            ],
        ),
    ]
